// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EAddMomentumType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAddMomentumType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAddMomentumType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EAddMomentumType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EAddMomentumType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EAddMomentumType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EAddMomentumType>()
	{
		return EAddMomentumType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAddMomentumType(EAddMomentumType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EAddMomentumType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EAddMomentumType_Hash() { return 1944152608U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EAddMomentumType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAddMomentumType"), 0, Get_Z_Construct_UEnum_ABP_200508_EAddMomentumType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAddMomentumType::None", (int64)EAddMomentumType::None },
				{ "EAddMomentumType::ChopBattleFinish", (int64)EAddMomentumType::ChopBattleFinish },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChopBattleFinish.Name", "EAddMomentumType::ChopBattleFinish" },
				{ "ModuleRelativePath", "Public/EAddMomentumType.h" },
				{ "None.Name", "EAddMomentumType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EAddMomentumType",
				"EAddMomentumType",
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
