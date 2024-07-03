#pragma once
#include <iostream>
#include <string>
#include <cassert> 
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Shader.h"

using namespace std;
using namespace glm;

class Sprite
{
public:
    Sprite(GLuint texID, vec3 pos, vec3 escala, Shader* shader, float speed, float ang = 0.0f, bool espelhado = false);
    ~Sprite();

    void definirShader(Shader* shader);
    void desenhar();
    void moveEsquerda();
    void moveDireita();

protected:
    void atualizar();

    GLuint VAO;
    GLuint texID;

    glm::vec3 pos, scale;
    float ang, speed;
    bool espelhado;

    Shader* shader;
};
