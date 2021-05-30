#ifndef MATRIX_H
#define MATRIX_H

template <typename T>
class Matrix
{
    public:
        Matrix();
        virtual ~Matrix();
        Matrix(const Matrix& other);
        Matrix& operator=(const Matrix& other);

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // MATRIX_H
