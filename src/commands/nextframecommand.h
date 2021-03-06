#ifndef NEXTFRAMECOMMAND_H
#define NEXTFRAMECOMMAND_H

#include "model/modellocator.h"
#include "gitlabstractcommand.h"

class NextFrameCommand : public GitlAbstractCommand
{
    Q_OBJECT
public:
    Q_INVOKABLE explicit NextFrameCommand(QObject *parent = 0);

    Q_INVOKABLE bool execute(GitlCommandParameter &rcInputArg, GitlCommandParameter &rcOutputArg);

signals:

public slots:

};

#endif // NEXTFRAMECOMMAND_H
