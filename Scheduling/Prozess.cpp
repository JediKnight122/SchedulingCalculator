#include "Prozess.h"
// Prozess Scheduling von Finn Wiskandt, Martyna Dorosewicz, Dennis Venturini
Prozess::Prozess(unsigned pTimeArrival, unsigned pTimeCalculation) : m_timeArrival(pTimeArrival),
                                                                     m_progession(0), m_timeToCalculate(pTimeCalculation)
{
}
Prozess::Prozess(unsigned pTimeArrival, unsigned pTimeCalculation, unsigned int pDeadline) : m_timeArrival(pTimeArrival),
                                                                     m_progession(0),
                                                                     m_timeToCalculate(pTimeCalculation),
                                                                     m_deadline(pDeadline)
{
}

Prozess::Prozess(){}

Prozess::Prozess(bool isArray, unsigned int m_timeArrival, unsigned int m_timeToCalculate, unsigned int m_deadline){

    this->m_timeArrival = m_timeArrival;
    this->m_timeToCalculate = m_timeToCalculate;
    this->m_deadline = m_deadline;

}
