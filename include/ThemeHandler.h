#include <QObject>
#include <QColor>

class ThemeHandler : public QObject
{
    Q_OBJECT

    Q_PROPERTY ( QColor blue READ blue NOTIFY colorsChanged )
    Q_PROPERTY ( QColor yellow READ yellow NOTIFY colorsChanged )
    Q_PROPERTY ( QColor black READ black NOTIFY colorsChanged )
    Q_PROPERTY ( QColor lightblue READ lightblue NOTIFY colorsChanged )
    Q_PROPERTY ( QColor raspberry READ raspberry NOTIFY colorsChanged )
    Q_PROPERTY ( QColor grey READ grey NOTIFY colorsChanged )
    Q_PROPERTY ( QColor darkgrey READ darkgrey NOTIFY colorsChanged )
    Q_PROPERTY ( QColor orange READ orange NOTIFY colorsChanged )
    Q_PROPERTY ( QColor purple READ purple NOTIFY colorsChanged )
    Q_PROPERTY ( QColor red READ red NOTIFY colorsChanged )
    Q_PROPERTY ( QColor green READ green NOTIFY colorsChanged )
    Q_PROPERTY ( QColor white READ white NOTIFY colorsChanged )

    Q_PROPERTY ( QColor windowcolor READ windowcolor NOTIFY colorsChanged )

public:
    ThemeHandler ( QObject* parent = nullptr );

    QColor blue() const;
    QColor yellow() const;
    QColor black() const;
    QColor lightblue() const;
    QColor raspberry() const;
    QColor grey() const;
    QColor darkgrey() const;
    QColor orange() const;
    QColor purple() const;
    QColor red() const;
    QColor green() const;
    QColor white() const;

    QColor windowcolor() const;

public slots:
    void  modifyLuminosity ( int percentage );

signals:
    void colorsChanged() ;

private:
    QColor m_blue =        QColor ( 0, 133, 186 ) ;
    QColor m_yellow =      QColor ( 250, 214, 19 ) ;
    QColor m_black =       QColor ( 35, 31, 32 ) ;
    QColor m_lightblue =   QColor ( 90, 183, 178 ) ;
    QColor m_raspberry =   QColor ( 230, 5, 102 ) ;
    QColor m_grey =        QColor ( 190, 185, 181 ) ;
    QColor m_darkgrey =    QColor ( 56, 62, 66 ) ;
    QColor m_orange =      QColor ( 248, 111, 53 ) ;
    QColor m_purple =      QColor ( 142, 63, 144 ) ;
    QColor m_red =         QColor ( 223, 27, 45 ) ;
    QColor m_green =       QColor ( 159, 188, 77 ) ;
    QColor m_white =       QColor ( 255, 255, 255 ) ;

    QColor m_windowcolor = QColor ( 51, 51, 51 );

    const QColor m_original_blue =        QColor ( 0, 133, 186 ) ;
    const QColor m_original_yellow =      QColor ( 250, 214, 19 ) ;
    const QColor m_original_black =       QColor ( 35, 31, 32 ) ;
    const QColor m_original_lightblue =   QColor ( 90, 183, 178 ) ;
    const QColor m_original_raspberry =   QColor ( 230, 5, 102 ) ;
    const QColor m_original_grey =        QColor ( 190, 185, 181 ) ;
    const QColor m_original_darkgrey =    QColor ( 56, 62, 66 ) ;
    const QColor m_original_orange =      QColor ( 248, 111, 53 ) ;
    const QColor m_original_purple =      QColor ( 142, 63, 144 ) ;
    const QColor m_original_green =       QColor ( 159, 188, 77 ) ;
    const QColor m_original_red =         QColor ( 223,  27,  45 );
    const QColor m_original_white =       QColor ( 255, 255, 255 ) ;

    const QColor m_original_windowcolor = QColor ( 51, 51, 51 );

};
