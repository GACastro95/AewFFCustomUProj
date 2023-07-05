// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EAchievementContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAchievementContent() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAchievementContent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EAchievementContent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EAchievementContent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EAchievementContent"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EAchievementContent>()
	{
		return EAchievementContent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAchievementContent(EAchievementContent_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EAchievementContent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EAchievementContent_Hash() { return 1138309361U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EAchievementContent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAchievementContent"), 0, Get_Z_Construct_UEnum_ABP_200508_EAchievementContent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAchievementContent::Index", (int64)EAchievementContent::Index },
				{ "EAchievementContent::Name", (int64)EAchievementContent::Name },
				{ "EAchievementContent::Unlock", (int64)EAchievementContent::Unlock },
				{ "EAchievementContent::Count", (int64)EAchievementContent::Count },
				{ "EAchievementContent::CountMax", (int64)EAchievementContent::CountMax },
				{ "EAchievementContent::IsSaveCount", (int64)EAchievementContent::IsSaveCount },
				{ "EAchievementContent::TableName", (int64)EAchievementContent::TableName },
				{ "EAchievementContent::StringKey", (int64)EAchievementContent::StringKey },
				{ "EAchievementContent::DebugText", (int64)EAchievementContent::DebugText },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Name", "EAchievementContent::Count" },
				{ "CountMax.Name", "EAchievementContent::CountMax" },
				{ "DebugText.Name", "EAchievementContent::DebugText" },
				{ "Index.Name", "EAchievementContent::Index" },
				{ "IsSaveCount.Name", "EAchievementContent::IsSaveCount" },
				{ "ModuleRelativePath", "Public/EAchievementContent.h" },
				{ "Name.Name", "EAchievementContent::Name" },
				{ "StringKey.Name", "EAchievementContent::StringKey" },
				{ "TableName.Name", "EAchievementContent::TableName" },
				{ "Unlock.Name", "EAchievementContent::Unlock" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EAchievementContent",
				"EAchievementContent",
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
