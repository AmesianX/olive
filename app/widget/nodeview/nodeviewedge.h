/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2019 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#ifndef NODEEDGEITEM_H
#define NODEEDGEITEM_H

#include <QGraphicsLineItem>

#include "node/edge.h"
#include "nodeviewitem.h"

class NodeViewEdge : public QGraphicsLineItem
{
public:
  NodeViewEdge(QGraphicsItem* parent = nullptr);

  void SetEdge(NodeEdgePtr edge);

  void Adjust();

protected:
  virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

private:
  qreal CalculateEdgeYPoint(NodeViewItem* item, int param_index, NodeViewItem* opposing);

  NodeEdgePtr edge_;
};

#endif // NODEEDGEITEM_H