#include "MyZoomer.h"

MyZoomer::MyZoomer(QWidget *canvas):QwtPlotZoomer(canvas)
{
	//µã»÷Ê±ÏÔÊ¾×ø±ê
	this->setTrackerMode(QwtPicker::ActiveOnly);
	//Êó±êÓÒ¼ü+Ctrl »Ö¸´È«Í¼ÊÓ½Ç
	this->setMousePattern(QwtEventPattern::MouseSelect2, Qt::RightButton, Qt::ControlModifier);
	//Êó±êÓÒ¼ü Öð¼¶»Ö¸´ÊÓ½Ç
	this->setMousePattern(QwtEventPattern::MouseSelect3, Qt::RightButton);
}

QwtText MyZoomer::trackerTextF(const QPointF &pos) const
{
	QColor bg{Qt::white};
	bg.setAlpha(255);
	QwtText text{ QwtPlotZoomer::trackerTextF(pos) };
	text.setBackgroundBrush(QBrush(bg));
	return text;
}
