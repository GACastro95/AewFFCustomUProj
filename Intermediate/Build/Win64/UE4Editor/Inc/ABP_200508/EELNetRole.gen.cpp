// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELNetRole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELNetRole() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetRole();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELNetRole_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELNetRole, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELNetRole"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELNetRole>()
	{
		return EELNetRole_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELNetRole(EELNetRole_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELNetRole"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELNetRole_Hash() { return 3972089014U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELNetRole()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELNetRole"), 0, Get_Z_Construct_UEnum_ABP_200508_EELNetRole_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELNetRole::ROLE_None", (int64)EELNetRole::ROLE_None },
				{ "EELNetRole::ROLE_Authority", (int64)EELNetRole::ROLE_Authority },
				{ "EELNetRole::ROLE_TempAuthority", (int64)EELNetRole::ROLE_TempAuthority },
				{ "EELNetRole::ROLE_AuthorityMask", (int64)EELNetRole::ROLE_AuthorityMask },
				{ "EELNetRole::ROLE_ELMode", (int64)EELNetRole::ROLE_ELMode },
				{ "EELNetRole::ROLE_DisabledRPC", (int64)EELNetRole::ROLE_DisabledRPC },
				{ "EELNetRole::ROLE_ModeMask", (int64)EELNetRole::ROLE_ModeMask },
				{ "EELNetRole::ROLE_MAX", (int64)EELNetRole::ROLE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EELNetRole.h" },
				{ "ROLE_Authority.Name", "EELNetRole::ROLE_Authority" },
				{ "ROLE_AuthorityMask.Name", "EELNetRole::ROLE_AuthorityMask" },
				{ "ROLE_DisabledRPC.Name", "EELNetRole::ROLE_DisabledRPC" },
				{ "ROLE_ELMode.Name", "EELNetRole::ROLE_ELMode" },
				{ "ROLE_MAX.Hidden", "" },
				{ "ROLE_MAX.Name", "EELNetRole::ROLE_MAX" },
				{ "ROLE_ModeMask.Name", "EELNetRole::ROLE_ModeMask" },
				{ "ROLE_None.Name", "EELNetRole::ROLE_None" },
				{ "ROLE_TempAuthority.Name", "EELNetRole::ROLE_TempAuthority" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELNetRole",
				"EELNetRole",
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
