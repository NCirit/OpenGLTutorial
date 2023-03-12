#pragma once

#include <GL/glew.h>

#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"


#define ASSERT(x) if(!(x)) __debugbreak();

// Buradaki parametreolan x bir fonksitondur. #x , x fonksiyonun ad�n� ifade eder.
// Bu fonksiyon �a�r�lan fonksiyonda bir hata var m� diye kontrol eder.
#define GLCall(x) GLClearError();\
	x;\
	ASSERT(GLLogCall(#x,__FILE__,__LINE__))

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);

class Renderer
{
public:
	void Clear() const;
	void Draw(const VertexArray& va, const IndexBuffer& ib,const Shader& shader) const;

};
