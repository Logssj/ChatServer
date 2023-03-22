#ifndef GROUPUSER_HPP
#define GROUPUSER_HPP

#include"user.hpp"

// 群组用户， 多个role角色信息， 从User类直接继承，复用User的其他信息
class GroupUser: public User
{
public:
    void setRole(string role){ this->role = role; }
    string getRole() {return this->role; }
private:
    string role;
};

#endif