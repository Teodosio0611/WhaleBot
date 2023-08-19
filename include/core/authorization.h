namespace WhaleBot {
    class Authorization final {
        public:
            // constructors && destructors
            Authorization() = default;
            ~Authorization() = default;

            // non-copyable && non-movable
            Authorization(const Authorization &) = delete;
            Authorization(Authorization &&) = delete;
            void operator=(const Authorization &) = delete;
            void operator=(Authorization &&) = delete;

        public:
            static Authorization &getInstance() {
                static Authorization instance;
                return instance;
            }

            bool setAPIKey(const std::sting_view key);

            std::string_view getAPIKey() const;

            
    };
}