// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSWeaponThrowProjectileType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSWeaponThrowProjectileType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSWeaponThrowProjectileType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSWeaponThrowProjectileType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSWeaponThrowProjectileType>()
	{
		return ESSWeaponThrowProjectileType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSWeaponThrowProjectileType(ESSWeaponThrowProjectileType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSWeaponThrowProjectileType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileType_Hash() { return 2814982018U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSWeaponThrowProjectileType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSWeaponThrowProjectileType::None", (int64)ESSWeaponThrowProjectileType::None },
				{ "ESSWeaponThrowProjectileType::Oil", (int64)ESSWeaponThrowProjectileType::Oil },
				{ "ESSWeaponThrowProjectileType::Pushpin", (int64)ESSWeaponThrowProjectileType::Pushpin },
				{ "ESSWeaponThrowProjectileType::FireBottle", (int64)ESSWeaponThrowProjectileType::FireBottle },
				{ "ESSWeaponThrowProjectileType::Bomb", (int64)ESSWeaponThrowProjectileType::Bomb },
				{ "ESSWeaponThrowProjectileType::Ball", (int64)ESSWeaponThrowProjectileType::Ball },
				{ "ESSWeaponThrowProjectileType::Max", (int64)ESSWeaponThrowProjectileType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ball.Name", "ESSWeaponThrowProjectileType::Ball" },
				{ "BlueprintType", "true" },
				{ "Bomb.Name", "ESSWeaponThrowProjectileType::Bomb" },
				{ "FireBottle.Name", "ESSWeaponThrowProjectileType::FireBottle" },
				{ "Max.Name", "ESSWeaponThrowProjectileType::Max" },
				{ "ModuleRelativePath", "Public/ESSWeaponThrowProjectileType.h" },
				{ "None.Name", "ESSWeaponThrowProjectileType::None" },
				{ "Oil.Name", "ESSWeaponThrowProjectileType::Oil" },
				{ "Pushpin.Name", "ESSWeaponThrowProjectileType::Pushpin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSWeaponThrowProjectileType",
				"ESSWeaponThrowProjectileType",
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
