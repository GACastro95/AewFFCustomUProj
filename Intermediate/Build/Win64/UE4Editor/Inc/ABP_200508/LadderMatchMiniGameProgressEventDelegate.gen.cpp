// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LadderMatchMiniGameProgressEventDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLadderMatchMiniGameProgressEventDelegate() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics
	{
		struct _Script_ABP_200508_eventLadderMatchMiniGameProgressEvent_Parms
		{
			int32 Step;
			bool Finish;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Step;
		static void NewProp_Finish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Finish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventLadderMatchMiniGameProgressEvent_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::NewProp_Finish_SetBit(void* Obj)
	{
		((_Script_ABP_200508_eventLadderMatchMiniGameProgressEvent_Parms*)Obj)->Finish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::NewProp_Finish = { "Finish", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_ABP_200508_eventLadderMatchMiniGameProgressEvent_Parms), &Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::NewProp_Finish_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::NewProp_Finish,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LadderMatchMiniGameProgressEventDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ABP_200508, nullptr, "LadderMatchMiniGameProgressEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_ABP_200508_eventLadderMatchMiniGameProgressEvent_Parms), Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ABP_200508_LadderMatchMiniGameProgressEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
