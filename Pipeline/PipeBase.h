#pragma once

#include <string>

namespace Pipeline
{
	class PipeBase
	{
	public:
		PipeBase();
		virtual ~PipeBase() {}

		void SetProducer(const std::string& name, size_t numThreads, size_t numFramesEachWrite);
		void SetConsumer(const std::string& name, size_t numThreads, size_t numFramesEachReadIncludeingOverlap, size_t numOverlapFrames);

		size_t GetBufferSize() const { return nBufferSize; }
		const std::string& GetConsumerName()const { return consumerName; }
		const std::string& GetProducerName() const { return producerName; }

	private:
		size_t nBufferSize;

		std::string consumerName;
		std::string producerName;

		size_t nReadThreads;
		size_t nReadSize;
		size_t nOverlap;

		size_t nWriteThreads;
		size_t nWriteSize;


		

	};
}