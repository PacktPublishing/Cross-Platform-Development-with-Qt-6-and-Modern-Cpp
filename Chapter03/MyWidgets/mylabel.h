#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
#include <QtDesigner>

class QDESIGNER_WIDGET_EXPORT MyLabel : public QLabel
{
    Q_OBJECT
    Q_PROPERTY(bool multiLine READ multiLine WRITE setMultiLine )
    Q_PROPERTY(QFont::Capitalization fontCase READ fontCase WRITE setFontCase )

public:
    MyLabel(QWidget *parent = nullptr);

    void setMultiLine(bool isMultiline );
    bool multiLine() const { return m_isMultiLine; };

    void setFontCase(QFont::Capitalization caseOptions);
    QFont::Capitalization fontCase() {return m_fontCase; }

private:
    bool m_isMultiLine = false;
    QFont::Capitalization m_fontCase = QFont::MixedCase;
};

#endif // MYLABEL_H
