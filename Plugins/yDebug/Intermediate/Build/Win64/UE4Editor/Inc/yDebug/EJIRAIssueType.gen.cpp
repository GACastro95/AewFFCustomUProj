// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/EJIRAIssueType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJIRAIssueType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAIssueType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* EJIRAIssueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_EJIRAIssueType, Z_Construct_UPackage__Script_yDebug(), TEXT("EJIRAIssueType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<EJIRAIssueType>()
	{
		return EJIRAIssueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJIRAIssueType(EJIRAIssueType_StaticEnum, TEXT("/Script/yDebug"), TEXT("EJIRAIssueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_EJIRAIssueType_Hash() { return 1678753174U; }
	UEnum* Z_Construct_UEnum_yDebug_EJIRAIssueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJIRAIssueType"), 0, Get_Z_Construct_UEnum_yDebug_EJIRAIssueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJIRAIssueType::All", (int64)EJIRAIssueType::All },
				{ "EJIRAIssueType::Task", (int64)EJIRAIssueType::Task },
				{ "EJIRAIssueType::Bug", (int64)EJIRAIssueType::Bug },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EJIRAIssueType::All" },
				{ "BlueprintType", "true" },
				{ "Bug.Name", "EJIRAIssueType::Bug" },
				{ "ModuleRelativePath", "Public/EJIRAIssueType.h" },
				{ "Task.Name", "EJIRAIssueType::Task" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"EJIRAIssueType",
				"EJIRAIssueType",
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
