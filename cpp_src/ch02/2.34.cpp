int main() {
    int i = 0, &r = i;
    auto a       = r;
    const int ci = i, &cr = ci;
    auto b       = ci;
    auto c       = cr;
    auto d       = &i;
    auto e       = &ci;
    const auto f = ci;

    auto& g = ci;

    a = 42;
    b = 42;
    c = 42;
    d = 42;// 错误
    e = 42;// 错误
    g = 42;// 错误
}
