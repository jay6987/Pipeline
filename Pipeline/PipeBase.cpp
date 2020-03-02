#include "PipeBase.h"

namespace Pipeline
{
	PipeBase::PipeBase()
	{
	}

	void PipeBase::SetProducer(const std::string& name, size_t numThreads, size_t numFramesEachWrite)
	{
		producerName = name;
		nWriteSize = numThreads;
		nWriteSize = numFramesEachWrite;
	}

	void PipeBase::SetConsumer(const std::string& name, size_t numThreads, size_t numFramesEachRead, size_t numOverlapFrames)
	{
		consumerName = name;
		nReadThreads = numThreads;
		nReadSize = numFramesEachRead;
		nOverlap = numOverlapFrames;
	}

}
