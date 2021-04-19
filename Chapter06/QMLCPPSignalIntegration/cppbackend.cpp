#include "cppbackend.h"

CPPBackend::CPPBackend(QObject *parent) : QObject(parent)
{

}
int CPPBackend::counter() const
{
    return m_counter;
}

void CPPBackend::setCounter(int counter)
{
    if (m_counter == counter)
        return;

    m_counter = counter;
    emit counterChanged(m_counter);
}


void CPPBackend::receiveFromQml()
{
    // We increase the counter and send a signal with its value
    ++m_counter;
    emit sendToQml(m_counter);
}
