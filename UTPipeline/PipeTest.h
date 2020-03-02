#pragma once

#include "..\Pipeline\PipeBase.h"

int TestPipeBase(){

	Pipeline::PipeBase pipeBase;
	pipeBase.SetConsumer("c", 1, 1,1);
	_ASSERT(pipeBase.GetConsumerName() == "c");

	pipeBase.SetProducer("p", 1, 1);
	_ASSERT(pipeBase.GetProducerName() == "p");

	_ASSERT(pipeBase.GetBufferSize() == 3);

	return 0;
}