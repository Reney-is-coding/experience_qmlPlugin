#include "include/ThemeHandler.h"
#include <QColor>

#include <QDebug>

ThemeHandler::ThemeHandler ( QObject* parent )
{
    Q_UNUSED ( parent );
}



QColor ThemeHandler::blue() const
{
    return m_blue;
}

QColor ThemeHandler::yellow() const
{
    return m_yellow;

}

QColor ThemeHandler::black() const
{
    return m_black;
}

QColor ThemeHandler::lightblue() const
{
    return m_lightblue;
}

QColor ThemeHandler::raspberry() const
{
    return m_raspberry;
}

QColor ThemeHandler::grey() const
{
    return m_grey;
}

QColor ThemeHandler::darkgrey() const
{
    return m_darkgrey;
}

QColor ThemeHandler::orange() const
{
    return m_orange;
}

QColor ThemeHandler::purple() const
{
    return m_purple;
}

QColor ThemeHandler::red() const
{
    return m_red;
}

QColor ThemeHandler::green() const
{
    return m_green;
}

QColor ThemeHandler::white() const
{
    return m_white;
}

QColor ThemeHandler::windowcolor() const
{
    return m_windowcolor;
}

void ThemeHandler::modifyLuminosity ( int percentage )
{
    if ( percentage >= 100 )
    {
        m_blue = m_original_blue.darker ( percentage );
        m_yellow = m_original_yellow.darker ( percentage );
        m_black = m_original_black.darker ( percentage );
        m_lightblue = m_original_lightblue.darker ( percentage );
        m_raspberry = m_original_raspberry.darker ( percentage );
        m_grey = m_original_blue.darker ( percentage );
        m_darkgrey = m_original_yellow.darker ( percentage );
        m_orange = m_original_black.darker ( percentage );
        m_purple = m_original_lightblue.darker ( percentage );
        m_red = m_original_red.darker ( percentage );
        m_green = m_original_green.darker ( percentage );
        m_white = m_original_white.darker ( percentage );

        m_windowcolor = m_original_windowcolor.darker ( percentage );
    }
    else
    {
        percentage = 200 - percentage;
        m_blue = m_original_blue.lighter ( percentage );
        m_yellow = m_original_yellow.lighter ( percentage );
        m_black = m_original_black.lighter ( percentage );
        m_lightblue = m_original_lightblue.lighter ( percentage );
        m_raspberry = m_original_raspberry.lighter ( percentage );
        m_grey = m_original_blue.lighter ( percentage );
        m_darkgrey = m_original_yellow.lighter ( percentage );
        m_orange = m_original_black.lighter ( percentage );
        m_purple = m_original_lightblue.lighter ( percentage );
        m_red = m_original_red.lighter ( percentage );
        m_green = m_original_green.lighter ( percentage );
        m_white = m_original_white.lighter ( percentage );

        m_windowcolor = m_original_windowcolor.lighter ( percentage );
    }

    emit colorsChanged() ;
}
