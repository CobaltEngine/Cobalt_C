#include "CobaltCXX/Components/OpenGL/Buffers/Buffers.h"


namespace gl {
	void VertexArray::Create() { glGenVertexArrays(1, &ID);   }
	void VertexArray::Bind  () { glBindVertexArray(ID);       }
	void VertexArray::UnBind() { glBindVertexArray(ID);       }
	void VertexArray::Delete() { glDeleteVertexArrays(1,&ID); }

}