# AutoMutation

A prototype tool is being developed in the project "High-Efficiency, Low-Technical Debt Mutation-Based Software Testing: Automated Process and Free Support Environment Prototype," supported by FAPESP Process nº 2019/23160-0.

The first step is to create docker components that wrap up traditional mutation testing tools for Java, Python, and C. This makes it possible to call these tools via API calls in a DevOps pipeline.

Additional steps include creating additional components to wrap automated testing generators (combining traditional testing generators with LLM-based test generators). Researchers in this direction are on the way. Please see [An Experimental Study Evaluating Cost, Adequacy Effectiveness of Pynguin’s Test Sets](https://doi.org/10.1145/3624032.3624034) and [An initial investigation of ChatGPT unit test generation capability](https://doi.org/10.1145/3624032.3624035).
