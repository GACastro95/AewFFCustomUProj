// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/EJIRARequestType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJIRARequestType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRARequestType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* EJIRARequestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_EJIRARequestType, Z_Construct_UPackage__Script_yDebug(), TEXT("EJIRARequestType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<EJIRARequestType>()
	{
		return EJIRARequestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJIRARequestType(EJIRARequestType_StaticEnum, TEXT("/Script/yDebug"), TEXT("EJIRARequestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_EJIRARequestType_Hash() { return 1741831751U; }
	UEnum* Z_Construct_UEnum_yDebug_EJIRARequestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJIRARequestType"), 0, Get_Z_Construct_UEnum_yDebug_EJIRARequestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJIRARequestType::Search", (int64)EJIRARequestType::Search },
				{ "EJIRARequestType::CreateIssue", (int64)EJIRARequestType::CreateIssue },
				{ "EJIRARequestType::GetIssue", (int64)EJIRARequestType::GetIssue },
				{ "EJIRARequestType::UpdateIssue", (int64)EJIRARequestType::UpdateIssue },
				{ "EJIRARequestType::DeleteIssue", (int64)EJIRARequestType::DeleteIssue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CreateIssue.Name", "EJIRARequestType::CreateIssue" },
				{ "DeleteIssue.Name", "EJIRARequestType::DeleteIssue" },
				{ "GetIssue.Name", "EJIRARequestType::GetIssue" },
				{ "ModuleRelativePath", "Public/EJIRARequestType.h" },
				{ "Search.Name", "EJIRARequestType::Search" },
				{ "UpdateIssue.Name", "EJIRARequestType::UpdateIssue" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"EJIRARequestType",
				"EJIRARequestType",
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
