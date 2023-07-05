// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSWeaponType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSWeaponType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSWeaponType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSWeaponType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSWeaponType>()
	{
		return ESSWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSWeaponType(ESSWeaponType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSWeaponType_Hash() { return 2241793387U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSWeaponType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSWeaponType::None", (int64)ESSWeaponType::None },
				{ "ESSWeaponType::Melee", (int64)ESSWeaponType::Melee },
				{ "ESSWeaponType::Gun", (int64)ESSWeaponType::Gun },
				{ "ESSWeaponType::Throw", (int64)ESSWeaponType::Throw },
				{ "ESSWeaponType::Trap", (int64)ESSWeaponType::Trap },
				{ "ESSWeaponType::Max", (int64)ESSWeaponType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Gun.Name", "ESSWeaponType::Gun" },
				{ "Max.Name", "ESSWeaponType::Max" },
				{ "Melee.Name", "ESSWeaponType::Melee" },
				{ "ModuleRelativePath", "Public/ESSWeaponType.h" },
				{ "None.Name", "ESSWeaponType::None" },
				{ "Throw.Name", "ESSWeaponType::Throw" },
				{ "Trap.Name", "ESSWeaponType::Trap" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSWeaponType",
				"ESSWeaponType",
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
