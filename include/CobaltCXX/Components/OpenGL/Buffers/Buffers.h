#pragma once
#include "CobaltCXX/Components/Types.h"
#include "glad/glad.h"


namespace gl {

	class Buffer {
	protected:
		uint32_t ID;

	public:
		virtual void Create() = 0;
		virtual void Delete() = 0;
		virtual void Bind  () = 0;
		virtual void UnBind() = 0;
	};

	class VertexArray : public Buffer {
	public:
		void Create();
		void Delete();
		void Bind();
		void UnBind();
	};

	class VertexBuffer : public Buffer {
	public:
		void Create();
		void Delete();
		void Bind();
		void UnBind();
	};

	class IndexBuffer : public Buffer {
	public:
		void Create();
		void Delete();
		void Bind();
		void UnBind();
	};
}