#include "MyZoomer.h"

MyZoomer::MyZoomer(QWidget *canvas):QwtPlotZoomer(canvas)
{
	//���ʱ��ʾ����
	this->setTrackerMode(QwtPicker::ActiveOnly);
	//����Ҽ�+Ctrl �ָ�ȫͼ�ӽ�
	this->setMousePattern(QwtEventPattern::MouseSelect2, Qt::RightButton, Qt::ControlModifier);
	//����Ҽ� �𼶻ָ��ӽ�
	this->setMousePattern(QwtEventPattern::MouseSelect3, Qt::RightButton);
}

QwtText MyZoomer::trackerTextF(const QPointF &pos) const
{
	QColor bg{ 0,0,0,0 };
	QwtText text{ QwtPlotZoomer::trackerTextF(pos) };
	text.setBackgroundBrush(QBrush(bg));
	return text;
}
