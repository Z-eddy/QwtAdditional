#pragma once

#include "qwtadditional_global.h"
#include<qwt_plot_zoomer.h>
//自定义zoomer,解决点击时数值显示黑色

class QWTADDITIONAL_EXPORT MyZoomer:public QwtPlotZoomer
{
public:
	MyZoomer(QWidget *canvas);
protected:
	virtual QwtText trackerTextF(const QPointF &) const override;
};
