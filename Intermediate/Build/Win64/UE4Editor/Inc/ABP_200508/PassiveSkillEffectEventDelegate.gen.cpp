// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/PassiveSkillEffectEventDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePassiveSkillEffectEventDelegate() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics
	{
		struct _Script_ABP_200508_eventPassiveSkillEffectEvent_Parms
		{
			FStPassiveSkillData PassiveSkillData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkillData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSkillData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::NewProp_PassiveSkillData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::NewProp_PassiveSkillData = { "PassiveSkillData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventPassiveSkillEffectEvent_Parms, PassiveSkillData), Z_Construct_UScriptStruct_FStPassiveSkillData, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::NewProp_PassiveSkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::NewProp_PassiveSkillData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::NewProp_PassiveSkillData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PassiveSkillEffectEventDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ABP_200508, nullptr, "PassiveSkillEffectEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_ABP_200508_eventPassiveSkillEffectEvent_Parms), Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ABP_200508_PassiveSkillEffectEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif