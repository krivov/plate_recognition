#ifndef CAMERAITEM_H
#define CAMERAITEM_H

#include <QQuickPaintedItem>
#include <QImage>

class CvCapture;
class QTimer;

class CameraItem : public QQuickPaintedItem
{
	Q_OBJECT
public:
	CameraItem( QQuickItem* parent = 0 );
	~CameraItem();

protected:
	void paint( QPainter* painter );

private Q_SLOTS:
	void read_frame();

private:
	CvCapture* m_capture;
	QImage m_last_frame;
	QTimer* m_timer;
};

#endif // CAMERAITEM_H
