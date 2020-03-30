#include "MyZoomer.h"

MyZoomer::MyZoomer(QWidget *canvas):QwtPlotZoomer(canvas)
{
	//点击时显示坐标
	this->setTrackerMode(QwtPicker::ActiveOnly);
	//鼠标左键+Ctrl 方框放大
	this->setMousePattern(QwtEventPattern::MouseSelect1, Qt::LeftButton, Qt::ControlModifier);
	//鼠标右键+Ctrl 恢复全图视角
	this->setMousePattern(QwtEventPattern::MouseSelect2, Qt::RightButton, Qt::ControlModifier);
	//鼠标右键 逐级恢复视角
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
