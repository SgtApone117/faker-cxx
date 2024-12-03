#pragma once

#include <span>
#include <array>
#include <string_view>

namespace faker::company
{

    struct CompanyDefinition
    {
        std::span<const std::string_view> buzzAdjectives;
        std::span<const std::string_view> buzzNouns;
        std::span<const std::string_view> buzzVerbs;
        std::span<const std::string_view> catchPhraseAdjectives;
        std::span<const std::string_view> catchPhraseDescriptors;
        std::span<const std::string_view> catchPhraseNouns;
        std::span<const std::string_view> companyTypes;
        std::span<const std::string_view> companyIndustries;
        std::span<const std::string_view> companySuffixes;
    };
const auto enUSbuzzAdjectives = std::to_array<std::string_view>({
    "24/365",
    "24/7",
    "B2B",
    "B2C",
    "back-end",
    "best-of-breed",
    "bleeding-edge",
    "bricks-and-clicks",
    "clicks-and-mortar",
    "collaborative",
    "compelling",
    "cross-media",
    "cross-platform",
    "customized",
    "cutting-edge",
    "distributed",
    "dot-com",
    "dynamic",
    "e-business",
    "efficient",
    "end-to-end",
    "enterprise",
    "extensible",
    "frictionless",
    "front-end",
    "global",
    "granular",
    "holistic",
    "impactful",
    "innovative",
    "integrated",
    "interactive",
    "intuitive",
    "killer",
    "leading-edge",
    "magnetic",
    "mission-critical",
    "next-generation",
    "one-to-one",
    "open-source",
    "out-of-the-box",
    "plug-and-play",
    "proactive",
    "real-time",
    "revolutionary",
    "rich",
    "robust",
    "scalable",
    "seamless",
    "sexy",
    "sticky",
    "strategic",
    "synergistic",
    "transparent",
    "turn-key",
    "ubiquitous",
    "user-centric",
    "value-added",
    "vertical",
    "viral",
    "virtual",
    "visionary",
    "web-enabled",
    "wireless",
    "world-class",
});

const auto enUSbuzzNouns = std::to_array<std::string_view>({
    "ROI",
    "action-items",
    "applications",
    "architectures",
    "bandwidth",
    "blockchains"
    "lifetime value",
    "channels",
    "communities",
    "content",
    "convergence",
    "deliverables",
    "e-business",
    "e-commerce",
    "e-markets",
    "experiences",
    "eyeballs",
    "functionalities",
    "infrastructures",
    "initiatives",
    "interfaces",
    "markets",
    "methodologies",
    "metrics",
    "mindshare",
    "models",
    "networks",
    "niches",
    "paradigms",
    "partnerships",
    "platforms",
    "portals",
    "relationships",
    "schemas",
    "solutions",
    "supply-chains",
    "synergies",
    "systems",
    "technologies",
    "users",
    "web services",
});

const auto enUSbuzzVerbs = std::to_array<std::string_view>({
    "aggregate",       "architect", "benchmark",     "brand",       "cultivate",  "deliver",     "deploy",
    "disintermediate", "drive",     "e-enable",      "embrace",     "empower",    "enable",      "engage",
    "engineer",        "enhance",   "envisioneer",   "evolve",      "expedite",   "exploit",     "extend",
    "facilitate",      "generate",  "grow",          "harness",     "implement",  "incentivize", "incubate",
    "innovate",        "integrate", "iterate",       "leverage",    "matrix",     "maximize",    "mesh",
    "monetize",        "morph",     "optimize",      "orchestrate", "productize", "redefine",    "reintermediate",
    "reinvent",        "repurpose", "revolutionize", "scale",       "seize",      "strategize",  "streamline",
    "syndicate",       "synergize", "synthesize",    "target",      "transform",  "transition",  "unleash",
    "utilize",         "visualize", "whiteboard",
});

const auto enUScatchPhraseAdjectives = std::to_array<std::string_view>({
    "Adaptive",
    "Advanced",
    "Ameliorated",
    "Assimilated",
    "Automated",
    "Balanced",
    "Business-focused",
    "Centralized",
    "Cloned",
    "Compatible",
    "Configurable",
    "Cross-group",
    "Cross-platform",
    "Customer-focused",
    "Customizable",
    "De-engineered",
    "Decentralized",
    "Devolved",
    "Digitized",
    "Distributed",
    "Diverse",
    "Down-sized",
    "Enhanced",
    "Enterprise-wide",
    "Ergonomic",
    "Exclusive",
    "Expanded",
    "Extended",
    "Face to face",
    "Focused",
    "Front-line",
    "Fully-configurable",
    "Function-based",
    "Fundamental",
    "Future-proofed",
    "Grass-roots",
    "Horizontal",
    "Implemented",
    "Innovative",
    "Integrated",
    "Intuitive",
    "Inverse",
    "Managed",
    "Mandatory",
    "Monitored",
    "Multi-channelled",
    "Multi-lateral",
    "Multi-layered",
    "Multi-tiered",
    "Networked",
    "Object-based",
    "Open-architected",
    "Open-source",
    "Operative",
    "Optimized",
    "Optional",
    "Organic",
    "Organized",
    "Persevering",
    "Persistent",
    "Phased",
    "Polarised",
    "Pre-emptive",
    "Proactive",
    "Profit-focused",
    "Profound",
    "Programmable",
    "Progressive",
    "Public-key",
    "Quality-focused",
    "Re-contextualized",
    "Re-engineered",
    "Reactive",
    "Realigned",
    "Reduced",
    "Reverse-engineered",
    "Right-sized",
    "Robust",
    "Seamless",
    "Secured",
    "Self-enabling",
    "Sharable",
    "Stand-alone",
    "Streamlined",
    "Switchable",
    "Synchronised",
    "Synergistic",
    "Synergized",
    "Team-oriented",
    "Total",
    "Triple-buffered",
    "Universal",
    "Up-sized",
    "Upgradable",
    "User-centric",
    "User-friendly",
    "Versatile",
    "Virtual",
    "Vision-oriented",
    "Visionary",
});

const auto enUScatchPhraseDescriptors = std::to_array<std::string_view>({
    "24 hour",
    "24/7",
    "3rd generation",
    "4th generation",
    "5th generation",
    "6th generation",
    "actuating",
    "analyzing",
    "asymmetric",
    "asynchronous",
    "attitude-oriented",
    "background",
    "bandwidth-monitored",
    "bi-directional",
    "bifurcated",
    "bottom-line",
    "clear-thinking",
    "client-driven",
    "client-server",
    "coherent",
    "cohesive",
    "composite",
    "content-based",
    "context-sensitive",
    "contextually-based",
    "dedicated",
    "demand-driven",
    "didactic",
    "directional",
    "discrete",
    "disintermediate",
    "dynamic",
    "eco-centric",
    "empowering",
    "encompassing",
    "even-keeled",
    "executive",
    "explicit",
    "exuding",
    "fault-tolerant",
    "foreground",
    "fresh-thinking",
    "full-range",
    "global",
    "grid-enabled",
    "heuristic",
    "high-level",
    "holistic",
    "homogeneous",
    "human-resource",
    "hybrid",
    "impactful",
    "incremental",
    "intangible",
    "interactive",
    "intermediate",
    "leading edge",
    "local",
    "logistical",
    "maximized",
    "methodical",
    "mission-critical",
    "mobile",
    "modular",
    "motivating",
    "multi-state",
    "multi-tasking",
    "multimedia",
    "national",
    "needs-based",
    "neutral",
    "next generation",
    "non-volatile",
    "object-oriented",
    "optimal",
    "optimizing",
    "radical",
    "real-time",
    "reciprocal",
    "regional",
    "responsive",
    "scalable",
    "secondary",
    "solution-oriented",
    "stable",
    "static",
    "system-worthy",
    "systematic",
    "systemic",
    "tangible",
    "tertiary",
    "transitional",
    "uniform",
    "upward-trending",
    "user-facing",
    "value-added",
    "web-enabled",
    "well-modulated",
    "zero administration",
    "zero defect",
    "zero tolerance",
});

const auto enUScatchPhraseNouns = std::to_array<std::string_view>({
    "Graphic Interface",
    "Graphical User Interface",
    "ability",
    "access",
    "adapter",
    "algorithm",
    "alliance",
    "analyzer",
    "application",
    "approach",
    "architecture",
    "archive",
    "array",
    "artificial intelligence",
    "attitude",
    "benchmark",
    "budgetary management",
    "capability",
    "capacity",
    "challenge",
    "circuit",
    "collaboration",
    "complexity",
    "concept",
    "conglomeration",
    "contingency",
    "core",
    "customer loyalty",
    "data-warehouse",
    "database",
    "definition",
    "emulation",
    "encoding",
    "encryption",
    "extranet",
    "firmware",
    "flexibility",
    "focus group",
    "forecast",
    "frame",
    "framework",
    "function",
    "functionalities",
    "groupware",
    "hardware",
    "help-desk",
    "hierarchy",
    "hub",
    "implementation",
    "info-mediaries",
    "infrastructure",
    "initiative",
    "installation",
    "instruction set",
    "interface",
    "internet solution",
    "intranet",
    "knowledge base",
    "knowledge user",
    "leverage",
    "local area network",
    "matrices",
    "matrix",
    "methodology",
    "middleware",
    "migration",
    "model",
    "moderator",
    "monitoring",
    "moratorium",
    "neural-net",
    "open architecture",
    "open system",
    "orchestration",
    "paradigm",
    "parallelism",
    "policy",
    "portal",
    "pricing structure",
    "process improvement",
    "product",
    "productivity",
    "project",
    "projection",
    "protocol",
    "secured line",
    "service-desk",
    "software",
    "solution",
    "standardization",
    "strategy",
    "structure",
    "success",
    "superstructure",
    "support",
    "synergy",
    "system engine",
    "task-force",
    "throughput",
    "time-frame",
    "toolset",
    "utilisation",
    "website",
    "workforce",
});

const auto enUScompanyTypes = std::to_array<std::string_view>({
    "Educational Institution",
    "Government Agency",
    "Nonprofit",
    "Partnership",
    "Privately Held",
    "Public Company",
    "Self-Employed",
    "Sole Proprietorship",
});

const auto enUScompanyIndustries = std::to_array<std::string_view>({
    "Accounting",
    "Airlines / Aviation",
    "Alternative Dispute Resolution",
    "Alternative Medicine",
    "Animation",
    "Apparel & Fashion",
    "Architecture & Planning",
    "Arts and Crafts",
    "Automotive",
    "Aviation & Aerospace",
    "Banking",
    "Biotechnology",
    "Broadcast Media",
    "Building Materials",
    "Business Supplies and Equipment",
    "Capital Markets",
    "Chemicals",
    "Civic & Social Organization",
    "Civil Engineering",
    "Commercial Real Estate",
    "Computer & Network Security",
    "Computer Games",
    "Computer Hardware",
    "Computer Networking",
    "Computer Software",
    "Construction",
    "Consumer Electronics",
    "Consumer Goods",
    "Consumer Services",
    "Cosmetics",
    "Dairy",
    "Defense & Space",
    "Design",
    "E-Learning",
    "Education Management",
    "Electrical / Electronic Manufacturing",
    "Entertainment",
    "Environmental Services",
    "Events Services",
    "Executive Office",
    "Facilities Services",
    "Farming",
    "Financial Services",
    "Fine Art",
    "Fishery",
    "Food & Beverages",
    "Food Production",
    "Fund-Raising",
    "Furniture",
    "Gambling & Casinos",
    "Glass Ceramics & Concrete",
    "Government Administration",
    "Government Relations",
    "Graphic Design",
    "Health Wellness and Fitness",
    "Higher Education",
    "Hospital & Health Care",
    "Hospitality",
    "Human Resources",
    "Import and Export",
    "Individual & Family Services",
    "Industrial Automation",
    "Information Services",
    "Information Technology and Services",
    "Insurance",
    "International Affairs",
    "International Trade and Development",
    "Internet",
    "Investment Banking",
    "Investment Management",
    "Judiciary",
    "Law Enforcement",
    "Law Practice",
    "Legal Services",
    "Legislative Office",
    "Leisure Travel & Tourism",
    "Libraries",
    "Logistics and Supply Chain",
    "Luxury Goods & Jewelry",
    "Machinery",
    "Management Consulting",
    "Maritime",
    "Market Research",
    "Marketing and Advertising",
    "Mechanical or Industrial Engineering",
    "Media Production",
    "Medical Devices",
    "Medical Practice",
    "Mental Health Care",
    "Military",
    "Mining & Metals",
    "Motion Pictures and Film",
    "Museums and Institutions",
    "Music",
    "Nanotechnology",
    "Newspapers",
    "Nonprofit Organization Management",
    "Oil & Energy",
    "Online Media",
    "Outsourcing / Offshoring",
    "Package / Freight Delivery",
    "Packaging and Containers",
    "Paper & Forest Products",
    "Performing Arts",
    "Pharmaceuticals",
    "Philanthropy",
    "Photography",
    "Plastics",
    "Political Organization",
    "Primary / Secondary Education",
    "Printing",
    "Professional Training & Coaching",
    "Program Development",
    "Public Policy",
    "Public Relations and Communications",
    "Public Safety",
    "Publishing",
    "Railroad Manufacture",
    "Ranching",
    "Real Estate",
    "Recreational Facilities and Services",
    "Religious Institutions",
    "Renewables & Environment",
    "Research",
    "Restaurants",
    "Retail",
    "Security and Investigations",
    "Semiconductors",
    "Shipbuilding",
    "Sporting Goods",
    "Sports",
    "Staffing and Recruiting",
    "Supermarkets",
    "Telecommunications",
    "Textiles",
    "Think Tanks",
    "Tobacco",
    "Translation and Localization",
    "Transportationg / Trucking / Railroad",
    "Utilities",
    "Venture Capital & Private Equity",
    "Veterinary",
    "Warehousing",
    "Wholesale",
    "Wine and Spirits",
    "Wireless",
    "Writing and Editing",
});

const auto enUScompanySuffixes = std::to_array<std::string_view>({
    "Group",
    "Inc",
    "LLC",
});

const CompanyDefinition enUSCompanyDefinition = {
    .buzzAdjectives = enUSbuzzAdjectives,
    .buzzNouns = enUSbuzzNouns,
    .buzzVerbs = enUSbuzzVerbs,
    .catchPhraseAdjectives = enUScatchPhraseAdjectives,
    .catchPhraseDescriptors = enUScatchPhraseDescriptors,
    .catchPhraseNouns = enUScatchPhraseNouns,
    .companyTypes = enUScompanyTypes,
    .companyIndustries = enUScompanyIndustries,
    .companySuffixes = enUScompanySuffixes,
};

}
