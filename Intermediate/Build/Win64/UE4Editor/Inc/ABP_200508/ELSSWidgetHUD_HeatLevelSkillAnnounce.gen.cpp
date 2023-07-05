// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_HeatLevelSkillAnnounce() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelUpInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText = FName(TEXT("ApplyHeatLevelText"));
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::ApplyHeatLevelText(int32 inHeatLevel)
	{
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventApplyHeatLevelText_Parms Parms;
		Parms.inHeatLevel=inHeatLevel;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce = FName(TEXT("ApplyHeatSkillAnnounce"));
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::ApplyHeatSkillAnnounce(FSSHeatLevelUpInfo const& InHeatLevelUpInfo)
	{
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventApplyHeatSkillAnnounce_Parms Parms;
		Parms.InHeatLevelUpInfo=InHeatLevelUpInfo;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close = FName(TEXT("Close"));
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::Close()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close),NULL);
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName = FName(TEXT("GetSkillName"));
	FString UELSSWidgetHUD_HeatLevelSkillAnnounce::GetSkillName(int32 InHeatLevelSkillId)
	{
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventGetSkillName_Parms Parms;
		Parms.InHeatLevelSkillId=InHeatLevelSkillId;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation = FName(TEXT("IsPlayAnimation"));
	bool UELSSWidgetHUD_HeatLevelSkillAnnounce::IsPlayAnimation()
	{
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsPlayAnimation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow = FName(TEXT("IsShow"));
	bool UELSSWidgetHUD_HeatLevelSkillAnnounce::IsShow()
	{
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsShow_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText = FName(TEXT("MakeMoveCommandText"));
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::MakeMoveCommandText(ESSMoveCommand inMoveCommand, int32 inMoveId, int32 InArrayNum)
	{
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventMakeMoveCommandText_Parms Parms;
		Parms.inMoveCommand=inMoveCommand;
		Parms.inMoveId=inMoveId;
		Parms.InArrayNum=InArrayNum;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open = FName(TEXT("Open"));
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::Open()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open),NULL);
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity = FName(TEXT("SetWIndowOpacity"));
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::SetWIndowOpacity(float InOpacity)
	{
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventSetWIndowOpacity_Parms Parms;
		Parms.InOpacity=InOpacity;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize = FName(TEXT("SetWIndowSize"));
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::SetWIndowSize(FVector2D const& InWindowSize)
	{
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventSetWIndowSize_Parms Parms;
		Parms.InWindowSize=InWindowSize;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update = FName(TEXT("Update"));
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::Update(float InDeltaTime)
	{
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventUpdate_Parms Parms;
		Parms.InDeltaTime=InDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update),&Parms);
	}
	void UELSSWidgetHUD_HeatLevelSkillAnnounce::StaticRegisterNativesUELSSWidgetHUD_HeatLevelSkillAnnounce()
	{
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventApplyHeatLevelText_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::NewProp_inHeatLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "ApplyHeatLevelText", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventApplyHeatLevelText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHeatLevelUpInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHeatLevelUpInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::NewProp_InHeatLevelUpInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::NewProp_InHeatLevelUpInfo = { "InHeatLevelUpInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventApplyHeatSkillAnnounce_Parms, InHeatLevelUpInfo), Z_Construct_UScriptStruct_FSSHeatLevelUpInfo, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::NewProp_InHeatLevelUpInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::NewProp_InHeatLevelUpInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::NewProp_InHeatLevelUpInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "ApplyHeatSkillAnnounce", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventApplyHeatSkillAnnounce_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InHeatLevelSkillId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::NewProp_InHeatLevelSkillId = { "InHeatLevelSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventGetSkillName_Parms, InHeatLevelSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventGetSkillName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::NewProp_InHeatLevelSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "GetSkillName", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventGetSkillName_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsPlayAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsPlayAnimation_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "IsPlayAnimation", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsPlayAnimation_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsShow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsShow_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "IsShow", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsShow_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inMoveCommand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inMoveCommand;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMoveId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InArrayNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::NewProp_inMoveCommand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::NewProp_inMoveCommand = { "inMoveCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventMakeMoveCommandText_Parms, inMoveCommand), Z_Construct_UEnum_ABP_200508_ESSMoveCommand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::NewProp_inMoveId = { "inMoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventMakeMoveCommandText_Parms, inMoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::NewProp_InArrayNum = { "InArrayNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventMakeMoveCommandText_Parms, InArrayNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::NewProp_inMoveCommand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::NewProp_inMoveCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::NewProp_inMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::NewProp_InArrayNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "MakeMoveCommandText", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventMakeMoveCommandText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "Open", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventSetWIndowOpacity_Parms, InOpacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::NewProp_InOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "SetWIndowOpacity", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventSetWIndowOpacity_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWindowSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWindowSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::NewProp_InWindowSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::NewProp_InWindowSize = { "InWindowSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventSetWIndowSize_Parms, InWindowSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::NewProp_InWindowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::NewProp_InWindowSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::NewProp_InWindowSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "SetWIndowSize", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventSetWIndowSize_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_HeatLevelSkillAnnounce_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_NoRegister()
	{
		return UELSSWidgetHUD_HeatLevelSkillAnnounce::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatLevelText, "ApplyHeatLevelText" }, // 1238339801
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_ApplyHeatSkillAnnounce, "ApplyHeatSkillAnnounce" }, // 2844930757
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Close, "Close" }, // 2962410784
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_GetSkillName, "GetSkillName" }, // 3002285522
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Init, "Init" }, // 1840004328
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsPlayAnimation, "IsPlayAnimation" }, // 2482916122
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_IsShow, "IsShow" }, // 4275251069
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_MakeMoveCommandText, "MakeMoveCommandText" }, // 26030102
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Open, "Open" }, // 689735060
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowOpacity, "SetWIndowOpacity" }, // 382944572
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_SetWIndowSize, "SetWIndowSize" }, // 3587519472
		{ &Z_Construct_UFunction_UELSSWidgetHUD_HeatLevelSkillAnnounce_Update, "Update" }, // 1213803036
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_HeatLevelSkillAnnounce.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_HeatLevelSkillAnnounce>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics::ClassParams = {
		&UELSSWidgetHUD_HeatLevelSkillAnnounce::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_HeatLevelSkillAnnounce, 2408200772);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_HeatLevelSkillAnnounce>()
	{
		return UELSSWidgetHUD_HeatLevelSkillAnnounce::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce(Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce, &UELSSWidgetHUD_HeatLevelSkillAnnounce::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_HeatLevelSkillAnnounce"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_HeatLevelSkillAnnounce);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
