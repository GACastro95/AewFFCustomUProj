// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSAbilitySlotType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSAbilitySlotType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilitySlotType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSAbilitySlotType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSAbilitySlotType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSAbilitySlotType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSAbilitySlotType>()
	{
		return ESSAbilitySlotType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSAbilitySlotType(ESSAbilitySlotType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSAbilitySlotType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSAbilitySlotType_Hash() { return 3448217502U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilitySlotType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSAbilitySlotType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSAbilitySlotType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSAbilitySlotType::None", (int64)ESSAbilitySlotType::None },
				{ "ESSAbilitySlotType::ItemBox", (int64)ESSAbilitySlotType::ItemBox },
				{ "ESSAbilitySlotType::OpponentRader", (int64)ESSAbilitySlotType::OpponentRader },
				{ "ESSAbilitySlotType::SafeFeild", (int64)ESSAbilitySlotType::SafeFeild },
				{ "ESSAbilitySlotType::XRaySpecs", (int64)ESSAbilitySlotType::XRaySpecs },
				{ "ESSAbilitySlotType::Max", (int64)ESSAbilitySlotType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ItemBox.Name", "ESSAbilitySlotType::ItemBox" },
				{ "Max.Name", "ESSAbilitySlotType::Max" },
				{ "ModuleRelativePath", "Public/ESSAbilitySlotType.h" },
				{ "None.Name", "ESSAbilitySlotType::None" },
				{ "OpponentRader.Name", "ESSAbilitySlotType::OpponentRader" },
				{ "SafeFeild.Name", "ESSAbilitySlotType::SafeFeild" },
				{ "XRaySpecs.Name", "ESSAbilitySlotType::XRaySpecs" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSAbilitySlotType",
				"ESSAbilitySlotType",
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
