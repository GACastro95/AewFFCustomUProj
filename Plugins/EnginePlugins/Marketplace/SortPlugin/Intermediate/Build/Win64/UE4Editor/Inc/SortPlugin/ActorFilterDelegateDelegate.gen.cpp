// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SortPlugin/Public/ActorFilterDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFilterDelegateDelegate() {}
// Cross Module References
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SortPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics
	{
		struct _Script_SortPlugin_eventActorFilterDelegate_Parms
		{
			const AActor* Value;
			bool Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SortPlugin_eventActorFilterDelegate_Parms, Value), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((_Script_SortPlugin_eventActorFilterDelegate_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SortPlugin_eventActorFilterDelegate_Parms), &Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorFilterDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SortPlugin, nullptr, "ActorFilterDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SortPlugin_eventActorFilterDelegate_Parms), Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
