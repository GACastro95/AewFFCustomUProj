// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponTrap() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponTrap_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponTrap();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponTrapParam();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponTrapObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponTrap::execDecreaseQuantity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DecreaseQuantity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrap::execGetQuantity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQuantity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrap::execOnRep_Quantity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Quantity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrap::execOnRep_StockedObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StockedObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrap::execSetQuantity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inQuantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuantity(Z_Param_inQuantity);
		P_NATIVE_END;
	}
	void AELSSWeaponTrap::StaticRegisterNativesAELSSWeaponTrap()
	{
		UClass* Class = AELSSWeaponTrap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseQuantity", &AELSSWeaponTrap::execDecreaseQuantity },
			{ "GetQuantity", &AELSSWeaponTrap::execGetQuantity },
			{ "OnRep_Quantity", &AELSSWeaponTrap::execOnRep_Quantity },
			{ "OnRep_StockedObject", &AELSSWeaponTrap::execOnRep_StockedObject },
			{ "SetQuantity", &AELSSWeaponTrap::execSetQuantity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics
	{
		struct ELSSWeaponTrap_eventDecreaseQuantity_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrap_eventDecreaseQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrap, nullptr, "DecreaseQuantity", nullptr, nullptr, sizeof(ELSSWeaponTrap_eventDecreaseQuantity_Parms), Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics
	{
		struct ELSSWeaponTrap_eventGetQuantity_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrap_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrap, nullptr, "GetQuantity", nullptr, nullptr, sizeof(ELSSWeaponTrap_eventGetQuantity_Parms), Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrap_OnRep_Quantity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrap_OnRep_Quantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrap_OnRep_Quantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrap, nullptr, "OnRep_Quantity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrap_OnRep_Quantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrap_OnRep_Quantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrap_OnRep_Quantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrap_OnRep_Quantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrap_OnRep_StockedObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrap_OnRep_StockedObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrap_OnRep_StockedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrap, nullptr, "OnRep_StockedObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrap_OnRep_StockedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrap_OnRep_StockedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrap_OnRep_StockedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrap_OnRep_StockedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics
	{
		struct ELSSWeaponTrap_eventSetQuantity_Parms
		{
			int32 inQuantity;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inQuantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::NewProp_inQuantity = { "inQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrap_eventSetQuantity_Parms, inQuantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::NewProp_inQuantity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrap, nullptr, "SetQuantity", nullptr, nullptr, sizeof(ELSSWeaponTrap_eventSetQuantity_Parms), Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponTrap_NoRegister()
	{
		return AELSSWeaponTrap::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_Attach_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent_Attach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSubParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSubParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StockedObjectRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StockedObjectRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StockedObjectLocal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StockedObjectLocal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponTrap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponTrap_DecreaseQuantity, "DecreaseQuantity" }, // 779899487
		{ &Z_Construct_UFunction_AELSSWeaponTrap_GetQuantity, "GetQuantity" }, // 3862302706
		{ &Z_Construct_UFunction_AELSSWeaponTrap_OnRep_Quantity, "OnRep_Quantity" }, // 366772196
		{ &Z_Construct_UFunction_AELSSWeaponTrap_OnRep_StockedObject, "OnRep_StockedObject" }, // 1228381113
		{ &Z_Construct_UFunction_AELSSWeaponTrap_SetQuantity, "SetQuantity" }, // 3158691131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponTrap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_SkeletalMeshComponent_Attach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_SkeletalMeshComponent_Attach = { "SkeletalMeshComponent_Attach", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrap, SkeletalMeshComponent_Attach), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_SkeletalMeshComponent_Attach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_SkeletalMeshComponent_Attach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_WeaponSubParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrap" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_WeaponSubParam = { "WeaponSubParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrap, WeaponSubParam), Z_Construct_UScriptStruct_FSSWeaponTrapParam, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_WeaponSubParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_WeaponSubParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectRep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrap" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectRep = { "StockedObjectRep", "OnRep_StockedObject", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrap, StockedObjectRep), Z_Construct_UClass_AELSSWeaponTrapObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectLocal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrap" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectLocal = { "StockedObjectLocal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrap, StockedObjectLocal), Z_Construct_UClass_AELSSWeaponTrapObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectLocal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrap" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_Quantity = { "Quantity", "OnRep_Quantity", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrap, Quantity), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_SkeletalMeshComponent_Attach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_WeaponSubParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_StockedObjectLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrap_Statics::NewProp_Quantity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponTrap_Statics::ClassParams = {
		&AELSSWeaponTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponTrap, 1289276579);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponTrap>()
	{
		return AELSSWeaponTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponTrap(Z_Construct_UClass_AELSSWeaponTrap, &AELSSWeaponTrap::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponTrap"), false, nullptr, nullptr, nullptr);

	void AELSSWeaponTrap::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StockedObjectRep(TEXT("StockedObjectRep"));
		static const FName Name_Quantity(TEXT("Quantity"));

		const bool bIsValid = true
			&& Name_StockedObjectRep == ClassReps[(int32)ENetFields_Private::StockedObjectRep].Property->GetFName()
			&& Name_Quantity == ClassReps[(int32)ENetFields_Private::Quantity].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWeaponTrap"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
