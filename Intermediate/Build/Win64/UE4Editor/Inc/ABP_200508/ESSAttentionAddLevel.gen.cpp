// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSAttentionAddLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSAttentionAddLevel() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionAddLevel();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSAttentionAddLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSAttentionAddLevel, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSAttentionAddLevel"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSAttentionAddLevel>()
	{
		return ESSAttentionAddLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSAttentionAddLevel(ESSAttentionAddLevel_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSAttentionAddLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSAttentionAddLevel_Hash() { return 1863613509U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionAddLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSAttentionAddLevel"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSAttentionAddLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSAttentionAddLevel::None", (int64)ESSAttentionAddLevel::None },
				{ "ESSAttentionAddLevel::Lv1", (int64)ESSAttentionAddLevel::Lv1 },
				{ "ESSAttentionAddLevel::Lv2", (int64)ESSAttentionAddLevel::Lv2 },
				{ "ESSAttentionAddLevel::Lv3", (int64)ESSAttentionAddLevel::Lv3 },
				{ "ESSAttentionAddLevel::Lv4", (int64)ESSAttentionAddLevel::Lv4 },
				{ "ESSAttentionAddLevel::Lv5", (int64)ESSAttentionAddLevel::Lv5 },
				{ "ESSAttentionAddLevel::Finisher", (int64)ESSAttentionAddLevel::Finisher },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Finisher.Name", "ESSAttentionAddLevel::Finisher" },
				{ "Lv1.Name", "ESSAttentionAddLevel::Lv1" },
				{ "Lv2.Name", "ESSAttentionAddLevel::Lv2" },
				{ "Lv3.Name", "ESSAttentionAddLevel::Lv3" },
				{ "Lv4.Name", "ESSAttentionAddLevel::Lv4" },
				{ "Lv5.Name", "ESSAttentionAddLevel::Lv5" },
				{ "ModuleRelativePath", "Public/ESSAttentionAddLevel.h" },
				{ "None.Name", "ESSAttentionAddLevel::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSAttentionAddLevel",
				"ESSAttentionAddLevel",
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
