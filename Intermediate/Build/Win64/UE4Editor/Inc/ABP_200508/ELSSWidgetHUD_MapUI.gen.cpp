// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_MapUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_MapUI() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MapUI_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MapUI();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSItemBoxType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStorm_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemManager_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execApplyAliveCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAliveCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAliveCount(Z_Param_InAliveCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execApplyAreaShrinkTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAreaShrinkTime(Z_Param_InSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execApplyKOCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InKOCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyKOCount(Z_Param_InKOCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execApplyWatchGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWatchGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execChangeMapMode)
	{
		P_GET_UBOOL(Z_Param_InIsWholeMapMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMapMode(Z_Param_InIsWholeMapMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execGetCanvasScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCanvasScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execGetEnemyVisibleDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnemyVisibleDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execGetFloor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZpos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFloor(Z_Param_InZpos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execGetItemBoxVisibleDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetItemBoxVisibleDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execIsTreasureBox)
	{
		P_GET_ENUM(ESSItemBoxType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTreasureBox(ESSItemBoxType(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execIsUsingEnemySearchAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingEnemySearchAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execIsUsingItemBoxSearchAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingItemBoxSearchAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execSetMinimapTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMinimapID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimapTexture(Z_Param_InMinimapID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execSetStormActor)
	{
		P_GET_OBJECT(AELSSStorm,Z_Param_InStormActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStormActor(Z_Param_InStormActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execSetVisibleAnnounceStormAndGuide)
	{
		P_GET_UBOOL(Z_Param_InIsShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleAnnounceStormAndGuide(Z_Param_InIsShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execSetVisibleOperationButton)
	{
		P_GET_UBOOL(Z_Param_InIsShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleOperationButton(Z_Param_InIsShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execShowOffIcons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOffIcons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execSwitchMapMode)
	{
		P_GET_UBOOL(Z_Param_InIsWholeMapMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchMapMode(Z_Param_InIsWholeMapMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdateAnnounceGuide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnnounceGuide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdateAnnounceStorm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnnounceStorm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdateCarrotMedal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCarrotMedal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdateEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdateHorseSaddle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHorseSaddle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdateItemBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdateMiniMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMiniMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdatePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execUpdateStormZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStormZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MapUI::execWorldLocationToUI)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->WorldLocationToUI(Z_Param_Out_InWorldLocation);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_MapUI_CreateMarkers = FName(TEXT("CreateMarkers"));
	void UELSSWidgetHUD_MapUI::CreateMarkers()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_MapUI_CreateMarkers),NULL);
	}
	static FName NAME_UELSSWidgetHUD_MapUI_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_MapUI::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_MapUI_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_MapUI_SetKeyConfig = FName(TEXT("SetKeyConfig"));
	void UELSSWidgetHUD_MapUI::SetKeyConfig(EKeyMappingType InKeyMapType)
	{
		ELSSWidgetHUD_MapUI_eventSetKeyConfig_Parms Parms;
		Parms.InKeyMapType=InKeyMapType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_MapUI_SetKeyConfig),&Parms);
	}
	void UELSSWidgetHUD_MapUI::StaticRegisterNativesUELSSWidgetHUD_MapUI()
	{
		UClass* Class = UELSSWidgetHUD_MapUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAliveCount", &UELSSWidgetHUD_MapUI::execApplyAliveCount },
			{ "ApplyAreaShrinkTime", &UELSSWidgetHUD_MapUI::execApplyAreaShrinkTime },
			{ "ApplyKOCount", &UELSSWidgetHUD_MapUI::execApplyKOCount },
			{ "ApplyWatchGameMode", &UELSSWidgetHUD_MapUI::execApplyWatchGameMode },
			{ "ChangeMapMode", &UELSSWidgetHUD_MapUI::execChangeMapMode },
			{ "GetCanvasScale", &UELSSWidgetHUD_MapUI::execGetCanvasScale },
			{ "GetEnemyVisibleDistance", &UELSSWidgetHUD_MapUI::execGetEnemyVisibleDistance },
			{ "GetFloor", &UELSSWidgetHUD_MapUI::execGetFloor },
			{ "GetItemBoxVisibleDistance", &UELSSWidgetHUD_MapUI::execGetItemBoxVisibleDistance },
			{ "IsTreasureBox", &UELSSWidgetHUD_MapUI::execIsTreasureBox },
			{ "IsUsingEnemySearchAbility", &UELSSWidgetHUD_MapUI::execIsUsingEnemySearchAbility },
			{ "IsUsingItemBoxSearchAbility", &UELSSWidgetHUD_MapUI::execIsUsingItemBoxSearchAbility },
			{ "SetMinimapTexture", &UELSSWidgetHUD_MapUI::execSetMinimapTexture },
			{ "SetStormActor", &UELSSWidgetHUD_MapUI::execSetStormActor },
			{ "SetVisibleAnnounceStormAndGuide", &UELSSWidgetHUD_MapUI::execSetVisibleAnnounceStormAndGuide },
			{ "SetVisibleOperationButton", &UELSSWidgetHUD_MapUI::execSetVisibleOperationButton },
			{ "ShowOffIcons", &UELSSWidgetHUD_MapUI::execShowOffIcons },
			{ "SwitchMapMode", &UELSSWidgetHUD_MapUI::execSwitchMapMode },
			{ "Update", &UELSSWidgetHUD_MapUI::execUpdate },
			{ "UpdateAnnounceGuide", &UELSSWidgetHUD_MapUI::execUpdateAnnounceGuide },
			{ "UpdateAnnounceStorm", &UELSSWidgetHUD_MapUI::execUpdateAnnounceStorm },
			{ "UpdateCarrotMedal", &UELSSWidgetHUD_MapUI::execUpdateCarrotMedal },
			{ "UpdateEnemy", &UELSSWidgetHUD_MapUI::execUpdateEnemy },
			{ "UpdateHorseSaddle", &UELSSWidgetHUD_MapUI::execUpdateHorseSaddle },
			{ "UpdateItemBox", &UELSSWidgetHUD_MapUI::execUpdateItemBox },
			{ "UpdateMiniMap", &UELSSWidgetHUD_MapUI::execUpdateMiniMap },
			{ "UpdatePlayer", &UELSSWidgetHUD_MapUI::execUpdatePlayer },
			{ "UpdateStormZone", &UELSSWidgetHUD_MapUI::execUpdateStormZone },
			{ "WorldLocationToUI", &UELSSWidgetHUD_MapUI::execWorldLocationToUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventApplyAliveCount_Parms
		{
			int32 InAliveCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAliveCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::NewProp_InAliveCount = { "InAliveCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventApplyAliveCount_Parms, InAliveCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::NewProp_InAliveCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "ApplyAliveCount", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventApplyAliveCount_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventApplyAreaShrinkTime_Parms
		{
			float InSecond;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::NewProp_InSecond = { "InSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventApplyAreaShrinkTime_Parms, InSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::NewProp_InSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "ApplyAreaShrinkTime", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventApplyAreaShrinkTime_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventApplyKOCount_Parms
		{
			int32 InKOCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InKOCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::NewProp_InKOCount = { "InKOCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventApplyKOCount_Parms, InKOCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::NewProp_InKOCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "ApplyKOCount", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventApplyKOCount_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "ApplyWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventChangeMapMode_Parms
		{
			bool InIsWholeMapMode;
		};
		static void NewProp_InIsWholeMapMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsWholeMapMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::NewProp_InIsWholeMapMode_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MapUI_eventChangeMapMode_Parms*)Obj)->InIsWholeMapMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::NewProp_InIsWholeMapMode = { "InIsWholeMapMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MapUI_eventChangeMapMode_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::NewProp_InIsWholeMapMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::NewProp_InIsWholeMapMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "ChangeMapMode", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventChangeMapMode_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_CreateMarkers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_CreateMarkers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_CreateMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "CreateMarkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_CreateMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_CreateMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_CreateMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_CreateMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventGetCanvasScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventGetCanvasScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "GetCanvasScale", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventGetCanvasScale_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventGetEnemyVisibleDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventGetEnemyVisibleDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "GetEnemyVisibleDistance", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventGetEnemyVisibleDistance_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventGetFloor_Parms
		{
			float InZpos;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InZpos;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::NewProp_InZpos = { "InZpos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventGetFloor_Parms, InZpos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventGetFloor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::NewProp_InZpos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "GetFloor", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventGetFloor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventGetItemBoxVisibleDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventGetItemBoxVisibleDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "GetItemBoxVisibleDistance", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventGetItemBoxVisibleDistance_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventIsTreasureBox_Parms
		{
			ESSItemBoxType InType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventIsTreasureBox_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MapUI_eventIsTreasureBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MapUI_eventIsTreasureBox_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "IsTreasureBox", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventIsTreasureBox_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventIsUsingEnemySearchAbility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MapUI_eventIsUsingEnemySearchAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MapUI_eventIsUsingEnemySearchAbility_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "IsUsingEnemySearchAbility", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventIsUsingEnemySearchAbility_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventIsUsingItemBoxSearchAbility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MapUI_eventIsUsingItemBoxSearchAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MapUI_eventIsUsingItemBoxSearchAbility_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "IsUsingItemBoxSearchAbility", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventIsUsingItemBoxSearchAbility_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InKeyMapType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventSetKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::NewProp_InKeyMapType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventSetMinimapTexture_Parms
		{
			int32 InMinimapID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMinimapID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::NewProp_InMinimapID = { "InMinimapID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventSetMinimapTexture_Parms, InMinimapID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::NewProp_InMinimapID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "SetMinimapTexture", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventSetMinimapTexture_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventSetStormActor_Parms
		{
			AELSSStorm* InStormActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStormActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::NewProp_InStormActor = { "InStormActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventSetStormActor_Parms, InStormActor), Z_Construct_UClass_AELSSStorm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::NewProp_InStormActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "SetStormActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventSetStormActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventSetVisibleAnnounceStormAndGuide_Parms
		{
			bool InIsShow;
		};
		static void NewProp_InIsShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::NewProp_InIsShow_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MapUI_eventSetVisibleAnnounceStormAndGuide_Parms*)Obj)->InIsShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::NewProp_InIsShow = { "InIsShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MapUI_eventSetVisibleAnnounceStormAndGuide_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::NewProp_InIsShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::NewProp_InIsShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "SetVisibleAnnounceStormAndGuide", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventSetVisibleAnnounceStormAndGuide_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventSetVisibleOperationButton_Parms
		{
			bool InIsShow;
		};
		static void NewProp_InIsShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::NewProp_InIsShow_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MapUI_eventSetVisibleOperationButton_Parms*)Obj)->InIsShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::NewProp_InIsShow = { "InIsShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MapUI_eventSetVisibleOperationButton_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::NewProp_InIsShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::NewProp_InIsShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "SetVisibleOperationButton", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventSetVisibleOperationButton_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ShowOffIcons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ShowOffIcons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ShowOffIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "ShowOffIcons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ShowOffIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ShowOffIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ShowOffIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ShowOffIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventSwitchMapMode_Parms
		{
			bool InIsWholeMapMode;
		};
		static void NewProp_InIsWholeMapMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsWholeMapMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::NewProp_InIsWholeMapMode_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MapUI_eventSwitchMapMode_Parms*)Obj)->InIsWholeMapMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::NewProp_InIsWholeMapMode = { "InIsWholeMapMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MapUI_eventSwitchMapMode_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::NewProp_InIsWholeMapMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::NewProp_InIsWholeMapMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "SwitchMapMode", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventSwitchMapMode_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Update_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "Update", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceGuide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "UpdateAnnounceGuide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceStorm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceStorm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceStorm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "UpdateAnnounceStorm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceStorm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceStorm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceStorm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceStorm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateCarrotMedal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateCarrotMedal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateCarrotMedal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "UpdateCarrotMedal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateCarrotMedal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateCarrotMedal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateCarrotMedal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateCarrotMedal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "UpdateEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateHorseSaddle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateHorseSaddle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateHorseSaddle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "UpdateHorseSaddle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateHorseSaddle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateHorseSaddle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateHorseSaddle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateHorseSaddle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateItemBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateItemBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateItemBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "UpdateItemBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateItemBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateItemBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateItemBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateItemBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateMiniMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateMiniMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateMiniMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "UpdateMiniMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateMiniMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateMiniMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateMiniMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateMiniMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdatePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdatePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdatePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "UpdatePlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdatePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdatePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdatePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdatePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateStormZone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateStormZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateStormZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "UpdateStormZone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateStormZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateStormZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateStormZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateStormZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics
	{
		struct ELSSWidgetHUD_MapUI_eventWorldLocationToUI_Parms
		{
			FVector InWorldLocation;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWorldLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::NewProp_InWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::NewProp_InWorldLocation = { "InWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventWorldLocationToUI_Parms, InWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::NewProp_InWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::NewProp_InWorldLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MapUI_eventWorldLocationToUI_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::NewProp_InWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MapUI, nullptr, "WorldLocationToUI", nullptr, nullptr, sizeof(ELSSWidgetHUD_MapUI_eventWorldLocationToUI_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_MapUI_NoRegister()
	{
		return UELSSWidgetHUD_MapUI::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiniMapTypeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMinimapId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultMinimapId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapCanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MapCanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWholeMap_MetaData[];
#endif
		static void NewProp_IsWholeMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWholeMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDoneInit_MetaData[];
#endif
		static void NewProp_IsDoneInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDoneInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSearchAbilityUsing_MetaData[];
#endif
		static void NewProp_IsSearchAbilityUsing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSearchAbilityUsing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWatchGameMode_MetaData[];
#endif
		static void NewProp_IsWatchGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWatchGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRealPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRealPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapCashed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMapCashed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapOperationButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapOperationButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy01Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy01Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemy01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy02Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy02Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemy02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBox01Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBox01Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBox01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemBox01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBox02Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBox02Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBox02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemBox02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBox01Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreasureBox01Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBox01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreasureBox01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBox02Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreasureBox02Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBox02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreasureBox02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseSaddle01Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorseSaddle01Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseSaddle01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HorseSaddle01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseSaddle02Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorseSaddle02Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseSaddle02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HorseSaddle02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarrotMedal01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarrotMedal01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarrotMedal02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarrotMedal02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormGuide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StormGuide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StormZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnounceStorm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnnounceStorm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapFrameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMapFrameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StormActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMapZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMapInfo;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorThreshold_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloorThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapTypeDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapTypeDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAliveCount, "ApplyAliveCount" }, // 3115009130
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyAreaShrinkTime, "ApplyAreaShrinkTime" }, // 2526460838
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyKOCount, "ApplyKOCount" }, // 1508349461
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ApplyWatchGameMode, "ApplyWatchGameMode" }, // 2439425741
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ChangeMapMode, "ChangeMapMode" }, // 1746073716
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_CreateMarkers, "CreateMarkers" }, // 439886016
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetCanvasScale, "GetCanvasScale" }, // 2635991562
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetEnemyVisibleDistance, "GetEnemyVisibleDistance" }, // 357507893
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetFloor, "GetFloor" }, // 3577933816
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_GetItemBoxVisibleDistance, "GetItemBoxVisibleDistance" }, // 1122812377
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Init, "Init" }, // 4010981085
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsTreasureBox, "IsTreasureBox" }, // 284185730
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingEnemySearchAbility, "IsUsingEnemySearchAbility" }, // 1473197572
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_IsUsingItemBoxSearchAbility, "IsUsingItemBoxSearchAbility" }, // 3786763871
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetKeyConfig, "SetKeyConfig" }, // 2413566623
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetMinimapTexture, "SetMinimapTexture" }, // 747772609
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetStormActor, "SetStormActor" }, // 1672997478
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleAnnounceStormAndGuide, "SetVisibleAnnounceStormAndGuide" }, // 1724062182
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SetVisibleOperationButton, "SetVisibleOperationButton" }, // 477033977
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_ShowOffIcons, "ShowOffIcons" }, // 658294522
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_SwitchMapMode, "SwitchMapMode" }, // 2195999178
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_Update, "Update" }, // 3117784586
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceGuide, "UpdateAnnounceGuide" }, // 3201270130
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateAnnounceStorm, "UpdateAnnounceStorm" }, // 2397439026
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateCarrotMedal, "UpdateCarrotMedal" }, // 3878120342
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateEnemy, "UpdateEnemy" }, // 185732335
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateHorseSaddle, "UpdateHorseSaddle" }, // 3175222936
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateItemBox, "UpdateItemBox" }, // 4178612381
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateMiniMap, "UpdateMiniMap" }, // 1972039278
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdatePlayer, "UpdatePlayer" }, // 2222119393
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_UpdateStormZone, "UpdateStormZone" }, // 1839567545
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MapUI_WorldLocationToUI, "WorldLocationToUI" }, // 4097721869
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_MapUI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerFloor = { "PlayerFloor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerFloor), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapTypeIndex = { "MiniMapTypeIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapTypeIndex), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_DefaultMinimapId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_DefaultMinimapId = { "DefaultMinimapId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, DefaultMinimapId), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_DefaultMinimapId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_DefaultMinimapId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvasSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvasSize = { "MapCanvasSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapCanvasSize), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWholeMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWholeMap_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_MapUI*)Obj)->IsWholeMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWholeMap = { "IsWholeMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_MapUI), &Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWholeMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWholeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWholeMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsDoneInit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsDoneInit_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_MapUI*)Obj)->IsDoneInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsDoneInit = { "IsDoneInit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_MapUI), &Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsDoneInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsDoneInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsDoneInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsSearchAbilityUsing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsSearchAbilityUsing_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_MapUI*)Obj)->IsSearchAbilityUsing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsSearchAbilityUsing = { "IsSearchAbilityUsing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_MapUI), &Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsSearchAbilityUsing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsSearchAbilityUsing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsSearchAbilityUsing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWatchGameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWatchGameMode_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_MapUI*)Obj)->IsWatchGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWatchGameMode = { "IsWatchGameMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_MapUI), &Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWatchGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWatchGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWatchGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerPos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerPos = { "PlayerPos", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRealPos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRealPos = { "PlayerRealPos", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerRealPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRealPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRealPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRotation = { "PlayerRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvas = { "MapCanvas", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapCashed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapCashed = { "MiniMapCashed", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapCashed), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapCashed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapCashed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapOperationButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapOperationButton = { "MapOperationButton", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapOperationButton), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapOperationButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapOperationButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets_Inner = { "Enemy01Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets = { "Enemy01Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, Enemy01Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets_Inner = { "Enemy02Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets = { "Enemy02Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, Enemy02Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets_Inner = { "ItemBox01Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets = { "ItemBox01Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, ItemBox01Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets_Inner = { "ItemBox02Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets = { "ItemBox02Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, ItemBox02Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets_Inner = { "TreasureBox01Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets = { "TreasureBox01Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, TreasureBox01Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets_Inner = { "TreasureBox02Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets = { "TreasureBox02Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, TreasureBox02Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets_Inner = { "HorseSaddle01Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets = { "HorseSaddle01Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, HorseSaddle01Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets_Inner = { "HorseSaddle02Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets = { "HorseSaddle02Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, HorseSaddle02Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal01Widgets = { "CarrotMedal01Widgets", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, CarrotMedal01Widgets), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal02Widgets = { "CarrotMedal02Widgets", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, CarrotMedal02Widgets), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemManager = { "ItemManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, ItemManager), Z_Construct_UClass_AELSSItemManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapImage = { "MapImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerIcon = { "PlayerIcon", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerSight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerSight = { "PlayerSight", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerSight), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormGuide_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormGuide = { "StormGuide", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, StormGuide), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormGuide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormZone = { "StormZone", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, StormZone), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_AnnounceStorm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_AnnounceStorm = { "AnnounceStorm", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, AnnounceStorm), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_AnnounceStorm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_AnnounceStorm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapFrameWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapFrameWidget = { "MiniMapFrameWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapFrameWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapFrameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapFrameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormActor = { "StormActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, StormActor), Z_Construct_UClass_AELSSStorm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapZoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapZoom = { "MiniMapZoom", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapZoom), Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapInfo = { "MiniMapInfo", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MiniMapInfo), Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapInfo_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_FloorThreshold_Inner = { "FloorThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_FloorThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_FloorThreshold = { "FloorThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, FloorThreshold), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_FloorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_FloorThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapTypeDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapTypeDataTable = { "MapTypeDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, MapTypeDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapTypeDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapTypeDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TextureMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MapUI" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MapUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TextureMaterial = { "TextureMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MapUI, TextureMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TextureMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TextureMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_DefaultMinimapId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWholeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsDoneInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsSearchAbilityUsing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_IsWatchGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRealPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapCashed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapOperationButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_Enemy02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemBox02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TreasureBox02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_HorseSaddle02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_CarrotMedal02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_ItemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormGuide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_AnnounceStorm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapFrameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_StormActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MiniMapInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_FloorThreshold_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_FloorThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_MapTypeDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::NewProp_TextureMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_MapUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::ClassParams = {
		&UELSSWidgetHUD_MapUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_MapUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_MapUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_MapUI, 2397856028);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_MapUI>()
	{
		return UELSSWidgetHUD_MapUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_MapUI(Z_Construct_UClass_UELSSWidgetHUD_MapUI, &UELSSWidgetHUD_MapUI::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_MapUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_MapUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
