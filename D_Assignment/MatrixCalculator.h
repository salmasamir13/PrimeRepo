#ifndef MATRIXCALCULATOR_H
#define MATRIXCALCULATOR_H


class MatrixCalculator
{
    public:
        MatrixCalculator();
        virtual ~MatrixCalculator();
        MatrixCalculator(const MatrixCalculator& other);
        MatrixCalculator& operator=(const MatrixCalculator& other);

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // MATRIXCALCULATOR_H
