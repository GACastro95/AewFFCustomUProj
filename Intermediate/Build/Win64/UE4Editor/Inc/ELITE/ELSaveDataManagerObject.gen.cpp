// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELSaveDataManagerObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSaveDataManagerObject() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataManagerObject_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataManagerObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	DEFINE_FUNCTION(UELSaveDataManagerObject::execGetMaxSlotNum_N)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxSlotNum_N(Z_Param_ItemId);
		P_NATIVE_END;
	}
	void UELSaveDataManagerObject::StaticRegisterNativesUELSaveDataManagerObject()
	{
		UClass* Class = UELSaveDataManagerObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxSlotNum_N", &UELSaveDataManagerObject::execGetMaxSlotNum_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics
	{
		struct ELSaveDataManagerObject_eventGetMaxSlotNum_N_Parms
		{
			int32 ItemId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataManagerObject_eventGetMaxSlotNum_N_Parms, ItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataManagerObject_eventGetMaxSlotNum_N_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataManagerObject, nullptr, "GetMaxSlotNum_N", nullptr, nullptr, sizeof(ELSaveDataManagerObject_eventGetMaxSlotNum_N_Parms), Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSaveDataManagerObject_NoRegister()
	{
		return UELSaveDataManagerObject::StaticClass();
	}
	struct Z_Construct_UClass_UELSaveDataManagerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlotNum_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSlotNum_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSaveDataManagerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSaveDataManagerObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSaveDataManagerObject_GetMaxSlotNum_N, "GetMaxSlotNum_N" }, // 3571074475
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataManagerObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSaveDataManagerObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSaveDataManagerObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataManagerObject_Statics::NewProp_MaxSlotNum_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataManagerObject" },
		{ "ModuleRelativePath", "Public/ELSaveDataManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSaveDataManagerObject_Statics::NewProp_MaxSlotNum_N = { "MaxSlotNum_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataManagerObject, MaxSlotNum_N), METADATA_PARAMS(Z_Construct_UClass_UELSaveDataManagerObject_Statics::NewProp_MaxSlotNum_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataManagerObject_Statics::NewProp_MaxSlotNum_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSaveDataManagerObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataManagerObject_Statics::NewProp_MaxSlotNum_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSaveDataManagerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSaveDataManagerObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSaveDataManagerObject_Statics::ClassParams = {
		&UELSaveDataManagerObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSaveDataManagerObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataManagerObject_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELSaveDataManagerObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataManagerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSaveDataManagerObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSaveDataManagerObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSaveDataManagerObject, 3300896200);
	template<> ELITE_API UClass* StaticClass<UELSaveDataManagerObject>()
	{
		return UELSaveDataManagerObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSaveDataManagerObject(Z_Construct_UClass_UELSaveDataManagerObject, &UELSaveDataManagerObject::StaticClass, TEXT("/Script/ELITE"), TEXT("UELSaveDataManagerObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSaveDataManagerObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
