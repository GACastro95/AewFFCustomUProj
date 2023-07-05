// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSLocatorFilterCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSLocatorFilterCondition() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLocatorFilterCondition();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSLocatorFilterCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSLocatorFilterCondition, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSLocatorFilterCondition"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSLocatorFilterCondition>()
	{
		return ESSLocatorFilterCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSLocatorFilterCondition(ESSLocatorFilterCondition_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSLocatorFilterCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSLocatorFilterCondition_Hash() { return 3882327138U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSLocatorFilterCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSLocatorFilterCondition"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSLocatorFilterCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSLocatorFilterCondition::None", (int64)ESSLocatorFilterCondition::None },
				{ "ESSLocatorFilterCondition::SafeArea", (int64)ESSLocatorFilterCondition::SafeArea },
				{ "ESSLocatorFilterCondition::SafeAreaAndNear", (int64)ESSLocatorFilterCondition::SafeAreaAndNear },
				{ "ESSLocatorFilterCondition::NearSafeArea", (int64)ESSLocatorFilterCondition::NearSafeArea },
				{ "ESSLocatorFilterCondition::AnnounceSafeArea", (int64)ESSLocatorFilterCondition::AnnounceSafeArea },
				{ "ESSLocatorFilterCondition::DamageArea", (int64)ESSLocatorFilterCondition::DamageArea },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnnounceSafeArea.Name", "ESSLocatorFilterCondition::AnnounceSafeArea" },
				{ "BlueprintType", "true" },
				{ "DamageArea.Name", "ESSLocatorFilterCondition::DamageArea" },
				{ "ModuleRelativePath", "Public/ESSLocatorFilterCondition.h" },
				{ "NearSafeArea.Name", "ESSLocatorFilterCondition::NearSafeArea" },
				{ "None.Name", "ESSLocatorFilterCondition::None" },
				{ "SafeArea.Name", "ESSLocatorFilterCondition::SafeArea" },
				{ "SafeAreaAndNear.Name", "ESSLocatorFilterCondition::SafeAreaAndNear" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSLocatorFilterCondition",
				"ESSLocatorFilterCondition",
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
