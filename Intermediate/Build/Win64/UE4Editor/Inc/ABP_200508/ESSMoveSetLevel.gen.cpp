// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSMoveSetLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSMoveSetLevel() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveSetLevel();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSMoveSetLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSMoveSetLevel, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSMoveSetLevel"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSMoveSetLevel>()
	{
		return ESSMoveSetLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSMoveSetLevel(ESSMoveSetLevel_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSMoveSetLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSMoveSetLevel_Hash() { return 830815602U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveSetLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSMoveSetLevel"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSMoveSetLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSMoveSetLevel::Lv1", (int64)ESSMoveSetLevel::Lv1 },
				{ "ESSMoveSetLevel::Lv2", (int64)ESSMoveSetLevel::Lv2 },
				{ "ESSMoveSetLevel::Lv3", (int64)ESSMoveSetLevel::Lv3 },
				{ "ESSMoveSetLevel::Lv4", (int64)ESSMoveSetLevel::Lv4 },
				{ "ESSMoveSetLevel::Lv5", (int64)ESSMoveSetLevel::Lv5 },
				{ "ESSMoveSetLevel::Lv6", (int64)ESSMoveSetLevel::Lv6 },
				{ "ESSMoveSetLevel::Lv7", (int64)ESSMoveSetLevel::Lv7 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Lv1.Name", "ESSMoveSetLevel::Lv1" },
				{ "Lv2.Name", "ESSMoveSetLevel::Lv2" },
				{ "Lv3.Name", "ESSMoveSetLevel::Lv3" },
				{ "Lv4.Name", "ESSMoveSetLevel::Lv4" },
				{ "Lv5.Name", "ESSMoveSetLevel::Lv5" },
				{ "Lv6.Name", "ESSMoveSetLevel::Lv6" },
				{ "Lv7.Name", "ESSMoveSetLevel::Lv7" },
				{ "ModuleRelativePath", "Public/ESSMoveSetLevel.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSMoveSetLevel",
				"ESSMoveSetLevel",
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
