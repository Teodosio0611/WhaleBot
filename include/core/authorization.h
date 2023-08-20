namespace WhaleBot {
    class Authorization final {
        public:
            // constructors && destructors
            Authorization() = default;
            ~Authorization() = default;

            // non-copyable && non-movable
            Authorization(const Authorization &) = delete;
            Authorization(Authorization &&) = delete;
            Authorization& operator=(const Authorization &) = delete;
            Authorization& operator=(Authorization &&) = delete;

        public:
            static Authorization &getInstance() {
                static Authorization instance;
                return instance;
            }

            bool setAPIKey(const std::string_view key);

        private:
            std::string apiKey_;
            
    };
}