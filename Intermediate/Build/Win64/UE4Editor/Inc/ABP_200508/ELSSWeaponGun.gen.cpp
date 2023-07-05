// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponGun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponGun() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponGun_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponGun();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponGunParam();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponGun::execDecreaseAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DecreaseAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponGun::execGetAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponGun::execOnRep_Ammo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Ammo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponGun::execSetAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAmmo(Z_Param_NewAmmo);
		P_NATIVE_END;
	}
	void AELSSWeaponGun::StaticRegisterNativesAELSSWeaponGun()
	{
		UClass* Class = AELSSWeaponGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseAmmo", &AELSSWeaponGun::execDecreaseAmmo },
			{ "GetAmmo", &AELSSWeaponGun::execGetAmmo },
			{ "OnRep_Ammo", &AELSSWeaponGun::execOnRep_Ammo },
			{ "SetAmmo", &AELSSWeaponGun::execSetAmmo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics
	{
		struct ELSSWeaponGun_eventDecreaseAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGun_eventDecreaseAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponGun, nullptr, "DecreaseAmmo", nullptr, nullptr, sizeof(ELSSWeaponGun_eventDecreaseAmmo_Parms), Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics
	{
		struct ELSSWeaponGun_eventGetAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGun_eventGetAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponGun, nullptr, "GetAmmo", nullptr, nullptr, sizeof(ELSSWeaponGun_eventGetAmmo_Parms), Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponGun_GetAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponGun_GetAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponGun_OnRep_Ammo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponGun_OnRep_Ammo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponGun_OnRep_Ammo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponGun, nullptr, "OnRep_Ammo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponGun_OnRep_Ammo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGun_OnRep_Ammo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponGun_OnRep_Ammo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponGun_OnRep_Ammo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics
	{
		struct ELSSWeaponGun_eventSetAmmo_Parms
		{
			int32 NewAmmo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::NewProp_NewAmmo = { "NewAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGun_eventSetAmmo_Parms, NewAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::NewProp_NewAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponGun, nullptr, "SetAmmo", nullptr, nullptr, sizeof(ELSSWeaponGun_eventSetAmmo_Parms), Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponGun_SetAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponGun_SetAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponGun_NoRegister()
	{
		return AELSSWeaponGun::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSubParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSubParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ammo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponGun_DecreaseAmmo, "DecreaseAmmo" }, // 1458043451
		{ &Z_Construct_UFunction_AELSSWeaponGun_GetAmmo, "GetAmmo" }, // 383266063
		{ &Z_Construct_UFunction_AELSSWeaponGun_OnRep_Ammo, "OnRep_Ammo" }, // 2321413322
		{ &Z_Construct_UFunction_AELSSWeaponGun_SetAmmo, "SetAmmo" }, // 4021054147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGun_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponGun.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_WeaponSubParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGun" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_WeaponSubParam = { "WeaponSubParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGun, WeaponSubParam), Z_Construct_UScriptStruct_FSSWeaponGunParam, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_WeaponSubParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_WeaponSubParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_ammo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGun" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_ammo = { "ammo", "OnRep_Ammo", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGun, ammo), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_ammo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_WeaponSubParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGun_Statics::NewProp_ammo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponGun_Statics::ClassParams = {
		&AELSSWeaponGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponGun, 2261782469);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponGun>()
	{
		return AELSSWeaponGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponGun(Z_Construct_UClass_AELSSWeaponGun, &AELSSWeaponGun::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponGun"), false, nullptr, nullptr, nullptr);

	void AELSSWeaponGun::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ammo(TEXT("ammo"));

		const bool bIsValid = true
			&& Name_ammo == ClassReps[(int32)ENetFields_Private::ammo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWeaponGun"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
