// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSCameraShakeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSCameraShakeType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraShakeType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSCameraShakeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSCameraShakeType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSCameraShakeType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSCameraShakeType>()
	{
		return ESSCameraShakeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSCameraShakeType(ESSCameraShakeType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSCameraShakeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSCameraShakeType_Hash() { return 445846258U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraShakeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSCameraShakeType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSCameraShakeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSCameraShakeType::None", (int64)ESSCameraShakeType::None },
				{ "ESSCameraShakeType::DamageWeak", (int64)ESSCameraShakeType::DamageWeak },
				{ "ESSCameraShakeType::DamageMedium", (int64)ESSCameraShakeType::DamageMedium },
				{ "ESSCameraShakeType::DamageStrong", (int64)ESSCameraShakeType::DamageStrong },
				{ "ESSCameraShakeType::GroundImpact_Weak", (int64)ESSCameraShakeType::GroundImpact_Weak },
				{ "ESSCameraShakeType::GroundImpact_Medium", (int64)ESSCameraShakeType::GroundImpact_Medium },
				{ "ESSCameraShakeType::GroundImpact_Strong", (int64)ESSCameraShakeType::GroundImpact_Strong },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DamageMedium.Name", "ESSCameraShakeType::DamageMedium" },
				{ "DamageStrong.Name", "ESSCameraShakeType::DamageStrong" },
				{ "DamageWeak.Name", "ESSCameraShakeType::DamageWeak" },
				{ "GroundImpact_Medium.Name", "ESSCameraShakeType::GroundImpact_Medium" },
				{ "GroundImpact_Strong.Name", "ESSCameraShakeType::GroundImpact_Strong" },
				{ "GroundImpact_Weak.Name", "ESSCameraShakeType::GroundImpact_Weak" },
				{ "ModuleRelativePath", "Public/ESSCameraShakeType.h" },
				{ "None.Name", "ESSCameraShakeType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSCameraShakeType",
				"ESSCameraShakeType",
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
