#pragma once

#include "qwtadditional_global.h"
#include<qwt_plot_zoomer.h>

class QWTADDITIONAL_EXPORT MyZoomer:public QwtPlotZoomer
{
public:
	MyZoomer(QWidget *canvas);
protected:
	virtual QwtText trackerTextF(const QPointF &) const override;
};
