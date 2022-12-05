#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

/*
    Класс Number -- класс положительных больших чисел
    Большое число будет храниться в динамическом массиве data
    Каждый элемент этого массива содержит разряд числа в 100-ричной системе счисления
    (так как base = 100)
    По сути, каждый элемент data хранит две цифры числа в десятичной записи
    Значение 100 для системы счисления выбрано как компромис между
    эффективностью и удобством написания программы.
    Если выбрать значения базы 10 - то программа будет не так эффективна по памяти
    Если выбрать значения базы 256 (максимально эффективное использование памяти для типа char),
    то алгоритм печати на экран сильно усложнится
    В качестве альтернативы, можно было выбрать базу 1e9, 
    изменив при этом тип элементов c char на int
    capacity - размер массива data
    size - сколько ячеек занимет число в массиве data
    size <= capacity
    Для удобства разряды числа хранятся в обратном порядке
    Например, число 12345678 соответствует массиву
    data = {78, 56, 34, 12}
    (это упрощает многие алгоритмы с такими числами)
*/


class Number 
{
private:
    static const int base = 100;
    std::size_t size;
    std::size_t capacity;
    char* data;

public:

    Number(int a) 
    {
        // Находим размер необходимой памяти под это число
        int temp = a;
        capacity = 0;
        while (temp != 0) 
        {
            temp /= base;
            capacity += 1;
        }

        // Отдельно обрабатываем случай, когда число равно 0
        if (capacity == 0) 
            capacity = 1;

        // Выделяем память и записывем число a в массив data
        // Например, число 12345678 представится в виде массива [78, 56, 34, 12]
        
        data = new char[capacity];

        for (int i = 0; i < capacity; ++i) 
        {
            data[i] = a % base;
            a /= base;
        }

        // В данном случае размер будет равен вместимости
        size = capacity;
    }

    Number()
    {
        capacity = 1;
        data = new char[capacity];
        data[0] = 0;
        size = capacity;
    }

    Number(const Number& n)
    {   
        capacity = n.capacity;
        data = new char[capacity];
        for (int i = 0; i < capacity; ++i) 
        {
            data[i] = n.data[i];
        }

        size = capacity;
    }

    Number(const char* str)
    {
        capacity = 0;
        int str_len = 0;
        while (str[str_len] != '\0')
        {   
            capacity++;
            str_len++;
        }

        if (str_len % 2 == 0)
        {
            capacity = capacity / 2;
            data = new char[capacity];
            str_len--;

            for (int i = 0; i < capacity; ++i)
            {
                int temp = 10 * (str[str_len - 1 - 2 * i] - '0');
                temp += str[str_len - 2 * i] - '0';
                data[i] = temp;
            }
        }
            
        else
        {
            capacity = capacity / 2 + 1;
            data = new char[capacity];
            data[capacity - 1] = str[0] - '0';

            str_len--;

            for (int i = 0; i < capacity - 1; ++i)
            {
                int temp = 10 * (str[str_len - 1 - 2 * i] - '0');
                temp += str[str_len - 2 * i] - '0';
                data[i] = temp;
            }
        }

        size = capacity;

    }
    
    Number& operator=(const Number& right)
    {
        capacity = right.capacity;
        data = right.data;
        size = right.size;
        return *this;
    }

    Number operator+(const Number& right)
    {
        Number res;

        if (size < right.size)
        {
            res.size = right.size;
            res.capacity = right.size + 1;
        }
        else
        {
            res.size = size;
            res.capacity = size + 1;
        }

        res.data = new char[res.capacity];
        for (int i = 0; i < size; ++i)
            res.data[i] = data[i];

        if (right.size > size)
        {
            for (int i = size; i < res.capacity; ++i)
                res.data[i] = 0;
        }


        int add = 0;
        int sum = 0;

        for (int i = 0; i < right.size; ++i)
        {
            sum = res.data[i] + right.data[i] + add;
            res.data[i] = sum % base;
            add = sum / base;
        }

        for (int i = right.size; i < res.size; ++i)
        {
            sum = res.data[i] + add;
            res.data[i] = sum % base;
            add = sum / base;
        }

        if (add != 0)
        {
            res.data[res.size] = add;
            ++res.size;
        }

        return res;
    }

    Number& operator+=(const Number& right)
    {
        *this = *this + right;
        return *this;
    }

    ~Number() 
    {
        delete [] data;
    }


    friend std::ostream& operator<<(std::ostream& stream, const Number& right);
};



std::ostream& operator<<(std::ostream& stream, const Number& right)
{
    // Печатаем самый большой разряд
    stream << (int)right.data[right.size - 1];

    // Печатаем остальные разряды с заполнением нулями до 2-х цифр
    // setfill и setw это то же самое, что и в языке C спецификатор %02d
    for (std::size_t i = 0; i < right.size - 1; ++i)
        stream << std::setfill('0') << std::setw(2) << (int)right.data[right.size - 2 - i];

    return stream;
}

int main() 
{
   
    Number x = 12345;
    Number y = 0;
    Number u = y;
    Number z = Number("345678");
    Number plus = 1000000000;
    plus = plus + z;
    Number plequal = 100000000;
    plequal += z;
    Number b = Number("9876521");
    Number zero;
    std::cout << x << " " << y << " " << z << " " << b << " " << zero << " " << u << " " << plus << " " << plequal << std::endl;
    Number fib1 = 1;
    Number fib2 = 1;
    Number var = fib2;
    for (int i = 0; i < 1000; ++i)
    {   
        var=fib2;  
        fib2 += fib1;
        if (i==999)
            std::cout << fib1 << std::endl;
        fib1 = var;
    }
}

