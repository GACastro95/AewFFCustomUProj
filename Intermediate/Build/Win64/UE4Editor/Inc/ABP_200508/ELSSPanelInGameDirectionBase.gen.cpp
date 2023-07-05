// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPanelInGameDirectionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPanelInGameDirectionBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelInGameDirectionBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelInGameDirectionBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSPanelInGameDirectionBaseEventDispatcher__DelegateSignature();
// End Cross Module References
	static FName NAME_UELSSPanelInGameDirectionBase_CloseNamePlate = FName(TEXT("CloseNamePlate"));
	void UELSSPanelInGameDirectionBase::CloseNamePlate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameDirectionBase_CloseNamePlate),NULL);
	}
	static FName NAME_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd = FName(TEXT("IsPlayEndMatchEnd"));
	bool UELSSPanelInGameDirectionBase::IsPlayEndMatchEnd()
	{
		ELSSPanelInGameDirectionBase_eventIsPlayEndMatchEnd_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSPanelInGameDirectionBase_IsPlayFightEnd = FName(TEXT("IsPlayFightEnd"));
	bool UELSSPanelInGameDirectionBase::IsPlayFightEnd()
	{
		ELSSPanelInGameDirectionBase_eventIsPlayFightEnd_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameDirectionBase_IsPlayFightEnd),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSPanelInGameDirectionBase_OpenNamePlate = FName(TEXT("OpenNamePlate"));
	void UELSSPanelInGameDirectionBase::OpenNamePlate(AELSSPlayer* inPlayer, int32 InChampionNum, const FString& InRingName, const FString& InGamerTag)
	{
		ELSSPanelInGameDirectionBase_eventOpenNamePlate_Parms Parms;
		Parms.inPlayer=inPlayer;
		Parms.InChampionNum=InChampionNum;
		Parms.InRingName=InRingName;
		Parms.InGamerTag=InGamerTag;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameDirectionBase_OpenNamePlate),&Parms);
	}
	static FName NAME_UELSSPanelInGameDirectionBase_PlayEndMatch = FName(TEXT("PlayEndMatch"));
	void UELSSPanelInGameDirectionBase::PlayEndMatch(bool InIsWinner)
	{
		ELSSPanelInGameDirectionBase_eventPlayEndMatch_Parms Parms;
		Parms.InIsWinner=InIsWinner ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameDirectionBase_PlayEndMatch),&Parms);
	}
	static FName NAME_UELSSPanelInGameDirectionBase_PlayFight = FName(TEXT("PlayFight"));
	void UELSSPanelInGameDirectionBase::PlayFight()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameDirectionBase_PlayFight),NULL);
	}
	void UELSSPanelInGameDirectionBase::StaticRegisterNativesUELSSPanelInGameDirectionBase()
	{
	}
	struct Z_Construct_UFunction_UELSSPanelInGameDirectionBase_CloseNamePlate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameDirectionBase_CloseNamePlate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameDirectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_CloseNamePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameDirectionBase, nullptr, "CloseNamePlate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_CloseNamePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_CloseNamePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameDirectionBase_CloseNamePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameDirectionBase_CloseNamePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelInGameDirectionBase_eventIsPlayEndMatchEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameDirectionBase_eventIsPlayEndMatchEnd_Parms), &Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameDirectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameDirectionBase, nullptr, "IsPlayEndMatchEnd", nullptr, nullptr, sizeof(ELSSPanelInGameDirectionBase_eventIsPlayEndMatchEnd_Parms), Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelInGameDirectionBase_eventIsPlayFightEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameDirectionBase_eventIsPlayFightEnd_Parms), &Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameDirectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameDirectionBase, nullptr, "IsPlayFightEnd", nullptr, nullptr, sizeof(ELSSPanelInGameDirectionBase_eventIsPlayFightEnd_Parms), Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InChampionNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InRingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGamerTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InGamerTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameDirectionBase_eventOpenNamePlate_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InChampionNum = { "InChampionNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameDirectionBase_eventOpenNamePlate_Parms, InChampionNum), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InRingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InRingName = { "InRingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameDirectionBase_eventOpenNamePlate_Parms, InRingName), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InRingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InRingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InGamerTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InGamerTag = { "InGamerTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameDirectionBase_eventOpenNamePlate_Parms, InGamerTag), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InGamerTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InGamerTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_inPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InChampionNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InRingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::NewProp_InGamerTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameDirectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameDirectionBase, nullptr, "OpenNamePlate", nullptr, nullptr, sizeof(ELSSPanelInGameDirectionBase_eventOpenNamePlate_Parms), Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics
	{
		static void NewProp_InIsWinner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsWinner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::NewProp_InIsWinner_SetBit(void* Obj)
	{
		((ELSSPanelInGameDirectionBase_eventPlayEndMatch_Parms*)Obj)->InIsWinner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::NewProp_InIsWinner = { "InIsWinner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameDirectionBase_eventPlayEndMatch_Parms), &Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::NewProp_InIsWinner_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::NewProp_InIsWinner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameDirectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameDirectionBase, nullptr, "PlayEndMatch", nullptr, nullptr, sizeof(ELSSPanelInGameDirectionBase_eventPlayEndMatch_Parms), Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayFight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayFight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameDirectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayFight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameDirectionBase, nullptr, "PlayFight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayFight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayFight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayFight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayFight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSPanelInGameDirectionBase_NoRegister()
	{
		return UELSSPanelInGameDirectionBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnEndPlayFightAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnEndPlayFightAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSPanelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSPanelInGameDirectionBase_CloseNamePlate, "CloseNamePlate" }, // 3786325398
		{ &Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayEndMatchEnd, "IsPlayEndMatchEnd" }, // 3120259300
		{ &Z_Construct_UFunction_UELSSPanelInGameDirectionBase_IsPlayFightEnd, "IsPlayFightEnd" }, // 1368297654
		{ &Z_Construct_UFunction_UELSSPanelInGameDirectionBase_OpenNamePlate, "OpenNamePlate" }, // 3842862108
		{ &Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayEndMatch, "PlayEndMatch" }, // 372278708
		{ &Z_Construct_UFunction_UELSSPanelInGameDirectionBase_PlayFight, "PlayFight" }, // 2422806450
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPanelInGameDirectionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameDirectionBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::NewProp_EventOnEndPlayFightAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameDirectionBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameDirectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::NewProp_EventOnEndPlayFightAnim = { "EventOnEndPlayFightAnim", nullptr, (EPropertyFlags)0x0020180010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameDirectionBase, EventOnEndPlayFightAnim), Z_Construct_UDelegateFunction_ABP_200508_SSPanelInGameDirectionBaseEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::NewProp_EventOnEndPlayFightAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::NewProp_EventOnEndPlayFightAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::NewProp_EventOnEndPlayFightAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSPanelInGameDirectionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::ClassParams = {
		&UELSSPanelInGameDirectionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSPanelInGameDirectionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSPanelInGameDirectionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSPanelInGameDirectionBase, 2503617375);
	template<> ABP_200508_API UClass* StaticClass<UELSSPanelInGameDirectionBase>()
	{
		return UELSSPanelInGameDirectionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSPanelInGameDirectionBase(Z_Construct_UClass_UELSSPanelInGameDirectionBase, &UELSSPanelInGameDirectionBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSPanelInGameDirectionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSPanelInGameDirectionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
