#pragma once
#include <stdint.h>
#include <glad/glad.h>
#include <glfw/glfw3.h>

namespace Worldforge {

	class VertexBuffer
	{
	private:
		uint32_t m_RendererID;
		uint32_t v_RendererID;




	public:

		VertexBuffer(float* vertices, uint32_t size);
		~VertexBuffer();


		void setData() const;
		void Bind() const;
		void Unbind() const;

	

	};

	class IndexBuffer
	{
	public:
		~IndexBuffer();
		void setData() const;
		void Bind() const;
		void Unbind()const;
		IndexBuffer(uint32_t* indices, uint32_t size);
		uint32_t GetCount() const { return m_Count; }


	private:
		uint32_t m_RendererID;
		uint32_t m_Count;

	};
}