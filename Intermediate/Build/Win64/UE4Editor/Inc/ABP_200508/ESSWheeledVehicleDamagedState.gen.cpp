// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSWheeledVehicleDamagedState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSWheeledVehicleDamagedState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDamagedState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSWheeledVehicleDamagedState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDamagedState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSWheeledVehicleDamagedState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSWheeledVehicleDamagedState>()
	{
		return ESSWheeledVehicleDamagedState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSWheeledVehicleDamagedState(ESSWheeledVehicleDamagedState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSWheeledVehicleDamagedState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDamagedState_Hash() { return 277508662U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDamagedState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSWheeledVehicleDamagedState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDamagedState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSWheeledVehicleDamagedState::None", (int64)ESSWheeledVehicleDamagedState::None },
				{ "ESSWheeledVehicleDamagedState::DamagedLv1", (int64)ESSWheeledVehicleDamagedState::DamagedLv1 },
				{ "ESSWheeledVehicleDamagedState::DamagedMax", (int64)ESSWheeledVehicleDamagedState::DamagedMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DamagedLv1.Name", "ESSWheeledVehicleDamagedState::DamagedLv1" },
				{ "DamagedMax.Name", "ESSWheeledVehicleDamagedState::DamagedMax" },
				{ "ModuleRelativePath", "Public/ESSWheeledVehicleDamagedState.h" },
				{ "None.Name", "ESSWheeledVehicleDamagedState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSWheeledVehicleDamagedState",
				"ESSWheeledVehicleDamagedState",
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
