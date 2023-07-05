// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/EBugReportSupportType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBugReportSupportType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EBugReportSupportType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* EBugReportSupportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_EBugReportSupportType, Z_Construct_UPackage__Script_yDebug(), TEXT("EBugReportSupportType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<EBugReportSupportType>()
	{
		return EBugReportSupportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBugReportSupportType(EBugReportSupportType_StaticEnum, TEXT("/Script/yDebug"), TEXT("EBugReportSupportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_EBugReportSupportType_Hash() { return 1112633030U; }
	UEnum* Z_Construct_UEnum_yDebug_EBugReportSupportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBugReportSupportType"), 0, Get_Z_Construct_UEnum_yDebug_EBugReportSupportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBugReportSupportType::None", (int64)EBugReportSupportType::None },
				{ "EBugReportSupportType::Mail", (int64)EBugReportSupportType::Mail },
				{ "EBugReportSupportType::Mail_JIRA", (int64)EBugReportSupportType::Mail_JIRA },
				{ "EBugReportSupportType::JIRA", (int64)EBugReportSupportType::JIRA },
				{ "EBugReportSupportType::Max", (int64)EBugReportSupportType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "JIRA.Name", "EBugReportSupportType::JIRA" },
				{ "Mail.Name", "EBugReportSupportType::Mail" },
				{ "Mail_JIRA.Name", "EBugReportSupportType::Mail_JIRA" },
				{ "Max.Name", "EBugReportSupportType::Max" },
				{ "ModuleRelativePath", "Public/EBugReportSupportType.h" },
				{ "None.Name", "EBugReportSupportType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"EBugReportSupportType",
				"EBugReportSupportType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
